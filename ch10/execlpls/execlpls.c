#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
  pid_t result;
  result = fork();
  if (result == -1) {
    fprintf(stderr, "Fork error\n");
    return 1;
  }
  /* Child */
  if (result == 0) {
    execlp("ls", "ls", "-l", "/", NULL);
    fprintf(stderr, "Exec error\n");
    return 1;
  }
  /* Parent */
  return 0;
}