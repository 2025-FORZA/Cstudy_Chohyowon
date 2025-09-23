#include <stdio.h>

int main() {
    int N;
    int call_time;
    int young_fee = 0;
    int min_fee = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &call_time);

        young_fee += (call_time / 30 + 1) * 10;

        min_fee += (call_time / 60 + 1) * 15;
    }

    if (young_fee < min_fee) {
        printf("Y %d\n", young_fee);
    }
    else if (min_fee < young_fee) {
        printf("M %d\n", min_fee);
    }
    else {
        printf("Y M %d\n", young_fee);
    }

    return 0;
}