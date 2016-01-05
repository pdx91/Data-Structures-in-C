#include <stdio.h>

int main() {
	int a[100][100], b[100][100], c[100][100];
	int m, n, o;
	scanf("%d%d%d", &m, &n, &o);
	for (int i = 1; i <= m; i++) 
		for (int j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);

	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= o; j++)
			scanf("%d", &b[i][j]);

	for (int i = 1; i <= m; i++) 
		for (int j = 1; j <= o; j++) {
			c[i][j] = 0; 
			for (int k = 1; k <= n; k++) {
				c[i][j] = c[i][j] + a[i][j]*b[k][j];
			}
		}

}
