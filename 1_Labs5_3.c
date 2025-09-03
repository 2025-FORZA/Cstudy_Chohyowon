#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        printf("%d", n);

        while (n >= 10) {
            int product = 1;
            int temp = n;

            while (temp > 0) {
                product *= (temp % 10);
                temp /= 10;
            }

            n = product;
            printf(" %d", n);
        }

        printf("\n");
    }

    return 0;
}