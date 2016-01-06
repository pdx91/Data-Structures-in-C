/* Calculate the max and next max from a set of given numbers
 *
 * Created by: Pradyumna Shembekar
 * Created on: 01/05/2016
**/

#include <stdio.h>

int main() {
	int n, num1, max, nextmax, i;
		
	/* Read in the number of inputs */
	scanf("%d", &n);
	printf("n = %d\n", n);

	/* Read in first number and initalize it to max */
	scanf("%d", &num1);
	max = num1;

	for (i = 1; i < n; i++) {
		scanf("%d", &num1);
		nextmax = max;
		if (max < num1) { 
			max = num1;
		}
		else if (nextmax < num1) {
			nextmax = num1;
		}
	}

	printf("MAX = %d, NEXTMAX = %d\n", max, nextmax);
	return 0;
}



