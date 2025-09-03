#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    bool is_multiple[1000001] = { false };

    for (int i = 0; i < m; i++) {
        int p;
        scanf("%d", &p);

        for (int j = p; j <= n; j += p) {
            is_multiple[j] = true;
        }
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if (is_multiple[i]) {
            sum += i;
        }
    }

    printf("%lld\n", sum);

    return 0;
}