#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int sum = 0;
    int min_prime = 0;

    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            if (sum == 0) {
                min_prime = i;
            }
            sum += i;
        }
    }

    if (sum == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", sum);
        printf("%d\n", min_prime);
    }

    return 0;
}