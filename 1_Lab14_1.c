#include <stdio.h>

int main() {
    int N;
    int sticks[100000];
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &sticks[i]);
    }
    int count = 1;
    int max = sticks[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        if (sticks[i] > max) {
            count++;
            max = sticks[i];
        }
    }
    printf("%d\n", count);

    return 0;
}