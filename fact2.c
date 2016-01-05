#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	printf("fact(%d) = %d \n", n, fact(n));

	return 0;
}

int fact(int i) {
	if (i == 1) return 1;
	else return(i*fact(i - 1));
}
