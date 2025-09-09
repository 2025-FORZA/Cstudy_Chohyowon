#include <stdio.h>

int main() {
    int arr[10001] = { 0 };
    int i, n, sum, tmp;

    for (i = 1; i <= 10000; i++) {
        n = i;
        sum = n;
        while (n > 0) {
            sum = sum + (n % 10);
            n = n / 10;
        }
        if (sum <= 10000) {
            arr[sum] = 1;
        }
    }

    for (i = 1; i <= 10000; i++) {
        if (arr[i] == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}