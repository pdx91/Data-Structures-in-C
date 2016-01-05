#include <stdio.h>

int main() {
  
  int f = 0;
  int max = 300;
  int step = 20;
  
  while (f <= max) {
    float c = 5 * (f - 32) / 9.0;
    printf("%3.0d\t%6.1f\n", f, c);
    f += step;
  }
  return 0;
}
