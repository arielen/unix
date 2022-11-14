#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#define HOLE_SIZE (1024 * 1024 * 20)
int main(int argc, char **argv) {
  int fd;
  char ch;
  if (argc < 2) {
    fprintf(stderr, "Too few arguments\n");
    return 1;
  }
  fd = open(argv[1], O_RDONLY);
  if (fd == -1) {
    fprintf(stderr, "Cannot open file\n");
    return 1;
  }
  while (read(fd, &ch, 1) > 0)
    printf("code: %d\n", ch);
  close(fd);
  return 0;
}