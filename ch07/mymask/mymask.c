#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(void) {
  mode_t test_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
  printf("%d\n", test_mode);
  return 0;
}