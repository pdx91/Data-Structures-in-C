#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	int ans = gcd(a, b);
	printf("GCD of %d and %d is %d \n", a, b, ans);

	return 0;
}

int gcd(int i, int j) {
	if (i < j) {
		int temp = i;
		i = j;	
		j = temp;
	}
		while (i%j != 0) {
			int	temp = i%j;
			i = j;
			j = temp;
		}
	

	return (j);
}
