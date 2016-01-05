#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	int f = fact(n);
	printf("fact(%d) = %d \n", n, f);

	return 0;
}

int fact(int i) {
	int m = 1;
	printf("In fact: i = %d, m = %d\n", i, m);
	if (i > 1) {
		printf("Out of fact: i = %d, m = %d\n", i, m);
		m = i * fact(i - 1); 
	}
	return m;
}
