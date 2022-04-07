#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int dinero = atoi(argv[1]);
  int can_m;
  int can_d;
  int can_cc;
  int can_c;
  int can_l;
  int can_xx;
  int can_x;
  can_m = dinero / 1000;
  dinero = dinero % 1000;
  can_d = dinero / 500;
  dinero = dinero % 500;
  can_cc = dinero / 200;
  dinero = dinero % 200;
  can_c = dinero / 100;
  dinero = dinero % 100;
  can_l = dinero / 50;
  dinero = dinero % 50;
  can_xx = dinero / 20;
  dinero = dinero % 20;
  can_x = dinero / 10;
   dinero = dinero % 10;

  printf("Se necesitan %d billetes de 1000, %d billetes de 500, %d billetes de 200, %d billetes de 100, %d billetes de 50, %d billetes de 20 y %d billetes de 10\n", can_m, can_d, can_cc, can_c, can_l, can_xx, can_x);
  return 0;
}
