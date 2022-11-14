#include <stdio.h>
#include <unistd.h>

int main(void) {
  int newnice = nice(10);
  printf("New nice: %d\n", newnice);
  return 0;
}