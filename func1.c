#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("Before func: %d %d %d\n", a, b, c);
	
	func(a, b, c);
	printf("After func: %d %d %d\n", a, b, c);

	return 0;
}

int func(x, y, z) 
	int x, y, z;
{
	x=1; y=2; z=3;
	printf("Inside func: %d %d %d\n", x, y, z);
	return 0;
}
