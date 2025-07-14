#include <stdio.h>


int main() {
	int n, m, i, j;
	int p, q, r, l;
	int basket[100];
	int temp;
	scanf("%d %d", &n, &m);

	for (l = 0; l < n; l++) {
		basket[l] = l + 1;
	}

	for (p = 0; p < m; p++) {
		scanf("%d %d", &i, &j);
		for (q = j, r = i; q > (i + j) / 2;q--, r++) {
			temp = basket[r - 1];
			basket[r - 1] = basket[q - 1];
			basket[q - 1] = temp;
		}
	}
	for (l = 0; l < n; l++) {
		printf("%d ", basket[l]);
	}
	return 0;
}