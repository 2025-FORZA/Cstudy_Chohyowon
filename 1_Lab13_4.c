#include <stdio.h>

int main() {
    int N;
    int seat_status[101] = { 0 };
    int refused_count = 0;
    int want_seat;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &want_seat);

        if (seat_status[want_seat] == 0) {
            seat_status[want_seat] = 1;
        }
        else {
            refused_count++;
        }
    }

    printf("%d\n", refused_count);

    return 0;
}