#include <stdio.h>

int main() {
    int C;
    scanf("%d", &C);

    for (int i = 0; i < C; i++) {
        int N;
        scanf("%d", &N);

        int scores[1000];
        int sum = 0;
        for (int j = 0; j < N; j++) {
            scanf("%d", &scores[j]);
            sum += scores[j];
        }

        double average = (double)sum / N;
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (scores[j] > average) {
                count++;
            }
        }

        double ratio = (double)count * 100.0 / N;
        printf("%.3lf%%\n", ratio);
    }
    return 0;
}