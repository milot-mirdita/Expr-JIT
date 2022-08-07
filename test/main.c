//
//  main.c
//  Test
//
//  Created by Indi Kernick on 5/2/19.
//  Copyright © 2019 Indi Kernick. All rights reserved.
//

// #define TINYEXPR 1
#ifdef TINYEXPR
#include "tinyexpr.h"
#else
#include "tinyexpr-compat.h"
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
  te_variable vars[] = {
    {"a", &a, TE_VARIABLE},
    {"three", &three, TE_CLOSURE0, &ctx}
  };
  const char *expr = "( 1/(-a+1) - sqrt(2/(a+2)) + three()/(a+three()) )";
  te_expr *bc = te_compile(expr, vars, sizeof(vars)/sizeof(vars[0]), NULL);
  printf("a %p %g\n", &a, a);
  te_print(bc);
  te_jit(bc);

  struct timeval tv;

  gettimeofday(&tv, NULL);
  size_t start = ((((unsigned long long)tv.tv_sec) * 1000) + (((unsigned long long)tv.tv_usec) / 1000));

  double result;
  volatile double magic = 0;
  for (int i = 0; i < 100000000; i++) {  
    result = te_eval(bc);
    magic += result;
  }

  gettimeofday(&tv, NULL);
  size_t end = ((((unsigned long long)tv.tv_sec) * 1000) + (((unsigned long long)tv.tv_usec) / 1000));

  printf("Eval: %g\nReal: %g\nTime: %lu\n", result, calculate(a), end - start);
  te_free(bc);
}
