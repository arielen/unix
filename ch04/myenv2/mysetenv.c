#include "myenv.h"
#include <stdio.h>
#include <stdlib.h>

void mysetenv(const char *name, const char *value) {
  printf("Setting variable %s\n", name);
  setenv(name, value, 1);
}