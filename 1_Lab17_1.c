#include <stdio.h>

#define MAX_N 5000

int main() {
    int N, K;
    int people[MAX_N];
    int result[MAX_N];
    int current_index = 0;
    int removed_count = 0;
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        people[i] = i + 1;
    }
    while (removed_count < N) {

        for (int step = 0; step < K - 1; step++) {
            current_index = (current_index + 1) % (N - removed_count);
        }
        result[removed_count] = people[current_index];
        for (int j = current_index; j < N - removed_count - 1; j++) {
            people[j] = people[j + 1];
        }

        removed_count++;
    }
    printf("<");
    for (int i = 0; i < N; i++) {
        printf("%d", result[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf(">\n");

    return 0;
}