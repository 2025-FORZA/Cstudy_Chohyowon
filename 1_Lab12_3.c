#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int sum = 0;
    int digit;

    digit = num % 10;
    sum += digit * digit * digit * digit * digit;
    num = num / 10;

    digit = num % 10;
    sum += digit * digit * digit * digit * digit;
    num = num / 10;

    digit = num % 10;
    sum += digit * digit * digit * digit * digit;
    num = num / 10;

    digit = num % 10;
    sum += digit * digit * digit * digit * digit;
    num = num / 10;

    digit = num % 10;
    sum += digit * digit * digit * digit * digit;

    printf("%d\n", sum);

    return 0;
}