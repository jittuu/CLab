#include <stdio.h>

/* copy input to output; 1st version */
main() {
  int c, prev_blank;

  prev_blank = 0;

  while ((c = getchar()) != EOF) {
    if(c == ' ') {
      if(!prev_blank) {
        putchar(c);
      }
      prev_blank = 1;
    }
    else {
      prev_blank = 0;
      putchar(c);
    }
  }
}
