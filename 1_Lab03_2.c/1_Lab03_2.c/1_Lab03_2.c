#include <stdio.h>

int main() {
    int N, count;
    scanf("%d", &N);
    for (count = 1; count <= 9; count++) {
        printf("%d * %d = %d\n", N, count, N * count);
    }
    return 0;
}