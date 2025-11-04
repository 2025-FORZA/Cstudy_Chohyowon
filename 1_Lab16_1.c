#include <stdio.h>
int main() {
	char board[8][8];
	int i, j;
	int count = 0;
	for (i = 0;i < 8; i++) {
		scanf_s("%s", board[i]);
	}
	for (i = 0;i < 8;i++) {
		for (j = 0;j < 8;j++) {
			if ((i + j) % 2 == 0) {
				if (board[i][j] == 'F') {
					count++;
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}