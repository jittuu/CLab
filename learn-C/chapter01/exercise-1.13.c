#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
  int c, state, word_index, word_count;
  int words[10];

  state = OUT;
  word_count = 0;
  word_index = -1;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
    }
    else if (state == IN) {
      words[word_index] = words[word_index] + 1;
    }
    else if (state == OUT) {
      state = IN;
      word_index++;
      words[word_index] = 1;
      word_count++;
    }
  }

  int i, j;
  for (i = 0; i < 10 && i < word_count; i++) {
    for (j = 0; j < words[i]; j++) {
      printf(">");
    }
    printf("\n");
  }
}
