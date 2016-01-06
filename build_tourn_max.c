/* Find out maximum using tournament data structure
 * Stores input data from n to 2n - 1
 * Starts comparing pair wise from 2n - 1 backwards and stores in (current comaprison location) / 2
 * Maximum value is stored in the 1st index of the array 
 *
 * Created by: Pradyumna Shembekar
 * Created on: 01/05/2016
**/

#include <stdio.h>

int main() {
	int i, n, num, tourn[100];

	/* Reads in the number of inputs n */
	scanf("%d", &n);
	printf("n = %d\n", n);

	/* Reads in array and stores in location n to 2n - 1 */
	for (i = n; i <= 2*n - 1; i += 1) {
		scanf("%d", &tourn[i]);
	}

	/* Comparison */
	for (i = 2*n - 2; i > 1; i -= 2) {
		tourn[i/2] = max(tourn[i], tourn[i + 1]);
	}

	/* Print the tourn array */
	for (i = 1; i <= 2*n - 1; i += 1) {
		printf("%d ", tourn[i]);
	}

	return 0;
}

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
