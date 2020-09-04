// author shenxuanyi2020@163.com
// collaborator xjs5065@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *c = readline("Enter temperature in celsius: ");
  double f;
  f = atof(c) * 9/5 +32;
  printf("%.6lf° in Celsius is equivalent to %.6lf° Fahrenheit.\n", atof(c),f);
  return 0;
}