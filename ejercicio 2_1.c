#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  float a = atof(argv[1]);
  printf("%.3f\n", cos(a)*cos(a)+sin(a)*sin(a));
  return 0;
}
