#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int choise = atoi(argv[1]);
  int answer = rand() % 100;
  printf("%s\n", choise == answer ? "ganaste" : "perdiste");
  return 0;
}
