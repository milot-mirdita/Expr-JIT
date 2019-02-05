//
//  main.c
//  Test
//
//  Created by Indi Kernick on 5/2/19.
//  Copyright © 2019 Indi Kernick. All rights reserved.
//

#include "expr jit.h"

#include <stdio.h>

static double calculate(double a) {
  return ( 1/(a+1) + 2/(a+2) + 3/(a+3) );
}

int main() {
  double a = 7;
  ej_variable vars[] = {
    {"", &a}
  };
  ej_bytecode *bc = ej_compile(NULL, vars, sizeof(vars));
  double result = ej_eval(bc);
  printf("Eval: %f\nReal: %f\n", result, calculate(a));
  ej_free(bc);
}
