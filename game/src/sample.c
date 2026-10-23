#include <libc/pc9800.h>
#include <stdio.h>

int main() {
  int m;
  m = __crt0_mtype;
  if (ISPCAT(m)) {
    printf("Hello, PC world\n");
  }
  if (ISPC98(m)) {
    printf("Hello, PC98 world\n");
  }
  return 0;
}
