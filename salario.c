#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int horas = atoi(argv[1]);
  int plata = atoi(argv[2]);
  printf("El salario total es de %d\n", horas * plata * 30);
  return 0;

}
