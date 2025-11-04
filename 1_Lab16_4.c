#include <stdio.h>

int main() {
    int K, i;
    int stack[100000];
    int top = -1;
    long long sum = 0;

    scanf("%d", &K);

    for (i = 0; i < K; i++) {
        int num;
        scanf("%d", &num);

        if (num == 0) {
            if (top > -1) {
                top--;
            }
        }
        else {
            top++;
            stack[top] = num;
        }
    }
    for (i = 0; i <= top; i++) {
        sum += stack[i];
    }

    printf("%lld\n", sum);
    return 0;
}