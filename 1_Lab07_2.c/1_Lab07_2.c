#include <stdio.h>

struct Person {
    int weight;
    int height;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Person people[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &people[i].weight, &people[i].height);
    }

    for (int i = 0; i < N; i++) {
        int rank = 1;
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            }
            if (people[j].weight > people[i].weight && people[j].height > people[i].height) {
                rank++;
            }
        }
        printf("%d ", rank);
    }

    printf("\n");

    return 0;
}