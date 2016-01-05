/* Finding the maximum and minimum of N numbers
 * Comapring pair wise for efficiency 
 * 
 * Created by: Pradyumna
 * Created on: 05/01/2016
**/

#include <stdio.h>

int main() {
	int i, m, n, numb1, numb2, max, min;

	/* Read in the total number of inputs */
	scanf("%d", &n);
	printf("n = %d\n", n);

	/* Read in the elements */
	scanf("%d", &max);
	min = max;
	m = n - 1; 
	
	if (n % 2 == 0) {
		scanf("%d", &min);
		if (max < min) swap(&max, &min);
		m = m - 1;
	}

	for (i = 0; i < m/2; i++) {
		scanf("%d%d", &numb1, &numb2);

		if (numb1 > numb2) {
			if (numb1 > max) max = numb1;
			if (numb2 < min) min = numb2;
		} 
		else {
			if (numb2 > max) max = numb2;
			if (numb1 < min) min = numb1;
		}
	}

	printf("MAX = %d\nMIN = %d", max, min);
	printf("\n");
	return 0;
}

int swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	
	return 0;
}

