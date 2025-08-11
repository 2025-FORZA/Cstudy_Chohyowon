#include <stdio.h>

int main() {
    int N;
    int count_5kg = 0;
    int count_3kg = 0;
    int result = -1;


    scanf("%d", &N);

    while (N >= 0) {
        if (N % 5 == 0) {
            count_5kg = N / 5;
            result = count_5kg + count_3kg;
            break;
        }

        N -= 3;
        count_3kg++;
    }

    printf("%d\n", result);

    return 0;
}