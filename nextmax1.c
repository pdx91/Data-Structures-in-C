/* Calculate the max and the next max using the tournament data structure 
 * 
 * Created by: Pradyumna Shembekar
 * Created on: 01/05/2016
**/

#include <stdio.h>

int main() {
	int n, tourn[100];
	
	/* Read number of inputs */
	scanf("%d", &n);
	printf("n = %d\n", n);

	/* Build tournament */
	buildtourn(tourn, n);
	printf("MAX = %d\n", tourn[1]);

	/* Calculate next maximum */
	printf("NEXT MAX = %d\n", nextmax(tourn, n));
 
	return 0;
}

int buildtourn(t, n) 
int t[], n; {
	int i;
	
	/* Store input from n to 2n - 1*/
	for (i = n; i <= 2*n - 1; i += 1) {
		scanf("%d", &t[i]);
	}	

	for (i = 2*n - 2; i > 1; i -= 2) {
		t[i/2] = maxi(t[i], t[(i + 1)]);
	}

	for (i = 1; i <= 2*n - 1; i += 1) {
		printf("%d ", t[i]);
	}

	return 0;
}

int nextmax(a, n) 
int a[], n;
{
	int i = 2, next;
	next = min(a[i], a[(i + 1)]);
	while (i < 2*n - 1) {
		if (a[i] > a[(i + 1)]) {
			if (next > a[(i + 1)]) next = a[(i + 1)];
			i = 2*i;
		}
		else {
			if (next < a[i]) next = a[i];
			i = 2*(i + 1);
		}
	}
	
	return next;
}

int maxi(int a, int b) {
	if (a > b) return a;
	else return b;
}

int min(int a, int b) {
	if (a < b) return a;
	else return b;
}
