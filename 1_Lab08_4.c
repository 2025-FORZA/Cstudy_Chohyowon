#include <stdio.h>
#include <string.h>

int main() {
    int col;
    char str[201];
    scanf("%d", &col);
    scanf("%s", str);

    int len = strlen(str);
    int row = len / col;
    char table[20][20];
    int index = 0;

    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < col; j++) {
                table[i][j] = str[index++];
            }
        }
        else {
            for (int j = col - 1; j >= 0; j--) {
                table[i][j] = str[index++];
            }
        }
    }

    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            printf("%c", table[i][j]);
        }
    }

    printf("\n");
    return 0;
}

