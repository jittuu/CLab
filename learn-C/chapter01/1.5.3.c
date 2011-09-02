#include <stdio.h>

/* copy input to output; 1st version */
main() {
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
       ++nl;
  }

  printf("%d\n", nl);
}
