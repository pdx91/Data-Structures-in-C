#include <stdio.h>

int main() {
	int i, n, min, max, numb;

	scanf("%d", &n);
	scanf("%d", &max);
	min = max;
	for (i=0; i<n-1; i++) {
		scanf("%d", &numb);
		if (numb > max)	max = numb;
		else if (numb < min) min = numb;
	}
	printf("MAX = %d, MIN = %d \n", max, min);

	return 0;
}
