#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int dia = atoi(argv[1]);
  int mes = atoi(argv[2]);
  printf("%s\n", dia >= 20 && mes < 6 && mes > 3 ? "verdadero" : "falso");
  return 0;
}
