#include <stdio.h>

void solve() {
    int N;
    if (scanf("%d", &N) != 1) return;

    if (N == 0) return;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                printf("#");
            }
            else {

                printf("J");
            }
        }
        printf("\n");
    }
}

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 1;

    for (int t = 0; t < T; t++) {
        solve();
        if (t < T - 1) {
            printf("\n");
        }
    }

    return 0;
}
}