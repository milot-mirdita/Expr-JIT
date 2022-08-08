#ifdef TINYEXPR
#include "tinyexpr.h"
#else
#include "tinyexpr-compat.h"
#endif

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <stdio.h>

int main(int argc, const char** argv) {
  int print = 0;
  int jit = 1;

  te_variable* vars = NULL;
  size_t var_count = 0;
  size_t var_capacity = 0;

  int option;
  while ((option = getopt(argc, (char * const*)argv, "pnv:")) != -1) {
    switch (option) {
      case 'p':
        print = 1;
        break;
      case 'n':
        jit = 0;
        break;
      case 'v':
        if (vars == NULL) {
            var_capacity = 1;
            vars = malloc(sizeof(te_variable));
        } else if (var_count == var_capacity) {
            var_capacity *= 2;
            vars = realloc(vars, sizeof(te_variable) * var_capacity);
        }
        char* key = strdup(optarg);
        char* eq = strchr(key, '=');
        if (eq == NULL) {
            return 1;
        }
        *eq = '\0';
        vars[var_count].name = key;
        double* value = malloc(sizeof(double));
        *value = strtod(eq + 1, NULL);
        vars[var_count].address = value;
        vars[var_count].type = TE_VARIABLE;
        vars[var_count].context = NULL;
        break;
      default:
        break;
    }
  }

  te_expr *bc;
  if (optind < argc) {
    bc  = te_compile(argv[optind], vars, var_count, NULL);
  } else {
    char buffer[4096];
    char* res = fgets(buffer, 4096, stdin);
    if (res == NULL) { return 0; }
    bc  = te_compile(buffer, vars, var_count, NULL);
  }
  if (print) {
    te_print(bc);
  }
    if (jit) {
    te_jit(bc);
  }
  double result = te_eval(bc);
  printf("%g\n", result);
  te_free(bc);
  for (size_t i = 0; i < var_count; ++i) {
    free((void*)vars[i].name);
    free((void*)vars[i].address);
  }
  free(vars);
  return 0;
}