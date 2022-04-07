#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int dias = atoi(argv[1]);
  int años = dias / 365;
  dias = dias % 365;
  int meses = dias / 30;
  dias = dias % 30;
  printf("%d años, %d meses, %d dias\n", años, meses, dias);
  return 0;
}
