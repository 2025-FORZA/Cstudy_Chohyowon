#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int cow_last_position[11];
    for (int i = 0; i < 11; i++) {
        cow_last_position[i] = -1;
    }

    int cross_count = 0;

    for (int i = 0; i < N; i++) {
        int cow_number;
        int location;
        scanf("%d %d", &cow_number, &location);

        if (cow_last_position[cow_number] == -1) {
            cow_last_position[cow_number] = location;
        }
        else {
            if (cow_last_position[cow_number] != location) {
                cross_count++;
                cow_last_position[cow_number] = location;
            }
        }
    }

    printf("%d\n", cross_count);

    return 0;
}