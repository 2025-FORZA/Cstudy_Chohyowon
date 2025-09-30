#include <stdio.h>

int main() {
    int A, B;
    int C;

    if (scanf("%d %d", &A, &B) != 2) return 1;
    if (scanf("%d", &C) != 1) return 1;

    B = B + C;

    if (B >= 60) {
        A = A + (B / 60);
        B = B % 60;
    }

    if (A >= 24) {
        A = A % 24;
    }

    printf("%d %d\n", A, B);

    return 0;
}