#include <stdio.h>

main(){
  int fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature scale */
  upper = 100; /* upper limit */
  step = 5; /* step size */

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * 9 / 5 + 32;
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius + step;
  }
}
