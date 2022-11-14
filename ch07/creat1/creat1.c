#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv) {
  int fd;
  mode_t fmode = S_IRUSR;
  if (argc < 2) {
    fprintf(stderr, "Too few arguments\n");
    return 1;
  }
  fd = creat(argv[1], fmode);
  if (fd == -1) {
    fprintf(stderr, "Cannot create file (%s)\n", argv[1]);
    return 1;
  }
  close(fd);
  return 0;
}