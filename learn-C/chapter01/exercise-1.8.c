#include <stdio.h>

/* copy input to output; 1st version */
main() {
  int c, blanks, tabs, newlines;

  blanks = tabs = newlines = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
       ++newlines;
    if (c == '\t')
      ++tabs;
    if (c == ' ')
      ++blanks;
  }

  printf("new line: %d\n", newlines);
  printf("blanks: %d\n", blanks);
  printf("tabs: %d\n", tabs);
}
