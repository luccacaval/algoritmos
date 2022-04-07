#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int v1 = atoi(argv[1]);
  int v2 = atoi(argv[2]);
  int s1 = atoi(argv[3]);
  int s2 = atoi(argv[4]);
  int ec1 = v1 *s1;
  int ec2= v2 * s2;
  int asw = ec1 + ec2;
  printf("%d\n", asw);
  return 0;
}
