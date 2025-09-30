#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int N;
    char room[MAX_SIZE][MAX_SIZE];
    int horizontal_count = 0;
    int vertical_count = 0;

    if (scanf("%d", &N) != 1) return 1;

    for (int i = 0; i < N; i++) {
        if (scanf("%s", room[i]) != 1) return 1;
    }

    for (int i = 0; i < N; i++) {
        int consecutive_dots = 0;
        for (int j = 0; j < N; j++) {
            if (room[i][j] == '.') {
                consecutive_dots++;
            }
            else {
                if (consecutive_dots >= 2) {
                    horizontal_count++;
                }
                consecutive_dots = 0;
            }
        }
        if (consecutive_dots >= 2) {
            horizontal_count++;
        }
    }

    for (int j = 0; j < N; j++) {
        int consecutive_dots = 0;
        for (int i = 0; i < N; i++) {
            if (room[i][j] == '.') {
                consecutive_dots++;
            }
            else {
                if (consecutive_dots >= 2) {
                    vertical_count++;
                }
                consecutive_dots = 0;
            }
        }
        if (consecutive_dots >= 2) {
            vertical_count++;
        }
    }

    printf("%d %d\n", horizontal_count, vertical_count);

    return 0;
}