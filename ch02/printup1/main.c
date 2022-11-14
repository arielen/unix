#include "print_up.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    fprintf(stderr, "Wrong arguments\n");
    return 1;
  }
  print_up(argv[1]);
  return 0;
}
