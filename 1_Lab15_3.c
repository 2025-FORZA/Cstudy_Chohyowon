#include <stdio.h>

int main() {
    int N, M;


    if (scanf("%d %d", &N, &M) != 2) return 1;

    int box_total_size = 0;
    int book_total_size = 0;
    int size;


    for (int i = 0; i < N; i++) {
        if (scanf("%d", &size) != 1) return 1;
        box_total_size += size;
    }


    for (int i = 0; i < M; i++) {
        if (scanf("%d", &size) != 1) return 1;
        book_total_size += size;
    }


    int remaining_space = box_total_size - book_total_size;

    printf("%d\n", remaining_space);

    return 0;
}