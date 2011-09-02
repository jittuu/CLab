#include <stdio.h>

/* copy input to output; 1st version */
main() {
  int c;

  c = getchar();
  if(c == EOF) {
    putchar(c);
  }
}
