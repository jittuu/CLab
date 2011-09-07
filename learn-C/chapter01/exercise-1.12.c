#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
  int c, word_count, state;

  state = OUT;
  word_count = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
      printf("\n");
    }
    else if (state == IN)
      putchar(c);
    else if (state == OUT) {
      state = IN;
      putchar(c);
    }
  }
}
