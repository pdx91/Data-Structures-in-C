#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a,  &b, &c);

	printf("Before call: %d %d %d\n", a, b, c);
	func2(&a, &b, &c);
	printf("After call: %d %d %d\n", a, b, c);

	return 0;	
}

int func2(i, j, k)
int *i, *j, *k; {
	*i=10; *j=20; *k=30;
	printf("Inside func2: %d %d %d\n", *i, *j, *k);

	return 0;
}
