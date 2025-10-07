#include <stdio.h>

#define MAX_N 100 
int main() {
    int N, M;
    int cards[MAX_N];


    if (scanf("%d %d", &N, &M) != 2) return 1;


    for (int i = 0; i < N; i++) {
        if (scanf("%d", &cards[i]) != 1) return 1;
    }

    int max_sum = 0;


    for (int i = 0; i < N; i++) {

        for (int j = i + 1; j < N; j++) {

            for (int k = j + 1; k < N; k++) {

                int current_sum = cards[i] + cards[j] + cards[k];


                if (current_sum <= M) {

                    if (current_sum > max_sum) {
                        max_sum = current_sum;
                    }
                }
            }
        }
    }

    printf("%d\n", max_sum);

    return 0;
}