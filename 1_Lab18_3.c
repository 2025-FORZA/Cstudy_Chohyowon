#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    for (int i = 1; i * i <= N; i++) {
        count++;
    }

    printf("%d\n", count);
    return 0;
}