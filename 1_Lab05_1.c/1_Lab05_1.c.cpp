#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int sum = 0;
    char number[101];
    scanf("%s", number);
    for (int i = 0; i < N; i++) {
        sum += (number[i] - '0');
    }
    printf("%d\n", sum);
    return 0;
}