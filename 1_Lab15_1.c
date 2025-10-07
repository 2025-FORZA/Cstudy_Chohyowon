#include <stdio.h>
#include <stdbool.h>

bool Gnum(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int N;
    if (scanf("%d", &N) != 1)
        return 1;
    for (int i = N; i >= 4; i--) {
        if (Gnum(i)) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;