#include <stdio.h>
#include <stdbool.h>

main() {
  bool a = true;
  while(a){
    printf("oh! running\n");
    a = false;
  }

  printf("stopped\n");
}
