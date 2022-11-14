#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#define HOLE_SIZE 5

int main(void) {
  int fd = creat("myfile", 0640);
  if (fd == -1) {
    fprintf(stderr, "Cannot open file\n");
    return 1;
  }
  write(fd, "AAA", 3);
  if (lseek(fd, HOLE_SIZE, SEEK_END) == -1) {
    fprintf(stderr, "Cannot set I/O position\n");
    return 1;
  }
  write(fd, "BBB", 3);
  close(fd);
  return 0;
}