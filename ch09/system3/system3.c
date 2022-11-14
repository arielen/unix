#include <stdio.h>
#include <stdlib.h>

int main(void) {
  system("sleep 5 &");
  fprintf(stderr, "end-of-program\n");
  system ("cd abrakadabra");
  return 0;
}