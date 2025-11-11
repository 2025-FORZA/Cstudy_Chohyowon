#include <stdio.h>
int main() {
	int N, i, j;
	int count = 0;
	scanf("%d", &N);
	for (i = 0;i < N;i++) {
		int num;
		int is_prime = 1;
		scanf("%d", &num);
		if (num == 1) {
			is_prime = 0;
		}
		else {
			for (j = 2;j < num;j++) {
				if (num % j == 0) {
					is_prime = 0;
					break;
				}
			}
		}
		if (is_prime == 1) {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}