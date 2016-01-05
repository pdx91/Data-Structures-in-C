/* Finding the maximum and minimum of N numbers
 * Comapring pair wise for efficiency 
 * 
 * Created by: Pradyumna
 * Created on: 05/01/2016
**/

#include <stdio.h>

int main() {
	int i, m, n, numb1, numb2, max, min;
	int large[100], small[100], index1 = 0, index2 = 0;

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


	/* Read 2 numbers and store larger and smaller in respective arrays */
	for (i = 0; i < m/2; i += 1) {
		scanf("%d%d", &numb1, &numb2);
		if (numb1 > numb2) {
			large[index1++] = numb1;
			small[index2++] = numb2;
		} else {
			large[index1++] = numb2;
			small[index2++] = numb1;
		}
	}
	
	max = maximum(large, max, index1);
	min = minimum(small, min, index2);	

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

int maximum(large_arr, max, index1)
int large_arr[], max, index1;
{
	int i;	
	for (i = 0; i < index1; i++) {
		if (max < large_arr[i]) {
			max = large_arr[i];
		}
	}

	return max;
}

int minimum(small_arr, min, index2)
int small_arr[], min, index2;
{
	int i;	
	for (i =  0; i < index2; i++) {
		if (min > small_arr[i]) {
			min = small_arr[i];
		}
	}

	return min;
}
