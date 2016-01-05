#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	swap1(a, b);
	printf("After swap1: %d %d\n", a, b);
	swap2(&a, &b);
	printf("After swap2: %d %d\n", a, b);

	return 0;
}

int swap1(int i, int j) {
	int temp = i;
	i = j;
	j = temp;

	return 0;
}

int swap2(int *i, int *j) {
	int temp = *i;
	*i = *j;
	*j = temp;

	return 0;
}
