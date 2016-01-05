#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  
  int f;
  float c;

  for (f = 0; f <= UPPER; f = f + STEP) {
    printf("%3d\t%6.1f\n", f, (5.0 / 9.0)*(f - 32));
  }

  return 0;
}
