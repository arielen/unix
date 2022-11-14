#include <stdio.h>
#include <unistd.h>

int main(void) {
  fork();
  printf("Hello World\n");
  sleep(15);
  return 0;
}