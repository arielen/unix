#include <stdio.h>
#include <stdlib.h>

int main(void) {
  fclose(stdout);
  stdout = fopen("anyfile", "w");
  if (stdout == NULL)
    abort();
  printf("Hello World!\n");
  return 0;
}