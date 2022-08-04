//
//  main.c
//  Test
//
//  Created by Indi Kernick on 5/2/19.
//  Copyright © 2019 Indi Kernick. All rights reserved.
//

//#define TINYEXPR 1
#ifdef TINYEXPR
#include "tinyexpr.h"
#define COMPILE(a,b,c) te_compile((a),(b),(c),NULL)
#define PRINT te_print
#define FREE te_free
#define EVAL te_eval
#define VAR_TYPE TE_VARIABLE
#define CLO_TYPE TE_CLOSURE0
typedef te_expr expression;
typedef te_variable variable;
#else
#include "exprjit.h"
#define COMPILE(a,b,c) ej_compile((a),(b),(c))
#define PRINT ej_print
#define FREE ej_free
#define EVAL ej_eval_goto
#define VAR_TYPE EJ_VAR
#define CLO_TYPE EJ_CLO0
typedef ej_bytecode expression;
typedef ej_variable variable;
#endif

#include <stdio.h>
#include <math.h>
#include <sys/time.h>

static double three(double *ctx) {
  return *ctx;
}

static double calculate(double a) {
  return ( 1/(-a+1) - sqrt(2/(a+2)) + 3/(a+3) );
}

static double calculate2() {
  return ( 1 && 0 ) || ( 2 > 1 );
}


int main() {
  double a = 7;
  double ctx = 3;
  variable vars[] = {
    {"a", &a, VAR_TYPE},
    {"three", &three, CLO_TYPE, &ctx}
  };
  const char *expr = "( 1/(-a+1) - sqrt(2/(a+2)) + three()/(a+three()) )";
  expression *bc = COMPILE(expr, vars, sizeof(vars)/sizeof(vars[0]));
  printf("a %p %g\n", &a, a);
  PRINT(bc);

  struct timeval tv;

  gettimeofday(&tv, NULL);
  size_t start = ((((unsigned long long)tv.tv_sec) * 1000) + (((unsigned long long)tv.tv_usec) / 1000));

  double result;
  volatile double magic = 0;
  for (int i = 0; i < 100000000; i++) {  
    result = EVAL(bc);
    magic += result;
  }

  gettimeofday(&tv, NULL);
  size_t end = ((((unsigned long long)tv.tv_sec) * 1000) + (((unsigned long long)tv.tv_usec) / 1000));

  printf("Eval: %g\nReal: %g\nTime: %lu\n", result, calculate(a), end - start);
  FREE(bc);

  // expr = "( 1 && 0 ) || ( 2 > 1 )";
  // bc = ej_compile(expr, NULL, 0);
  // ej_print(bc);
  // result = ej_eval_goto(bc);
  // printf("Eval: %g\nReal: %g\n", result, calculate2());
  // ej_free(bc);
}
