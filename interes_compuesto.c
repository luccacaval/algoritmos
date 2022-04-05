#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  float p= atof(argv[1]);
  float r= atof(argv[2]);
  float t= atoi(argv[3]);
  float e= exp(r*t);
  float total= p*e;
  printf("El total acumulado tras años %0.f con un capital inicial de %0.f es de %.2f\n", t, p,total);
  return 0;
}
