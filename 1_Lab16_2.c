#include <stdio.h>
#include <string.h>

int main() {
    char a[82], b[82], res[83];
    int lenA, lenB, i, j, k = 0, carry = 0, sum;

    scanf("%s %s", a, b);

    lenA = strlen(a);
    lenB = strlen(b);

    i = lenA - 1;
    j = lenB - 1;

    while (i >= 0 || j >= 0 || carry) {
        sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        res[k] = (sum % 2) + '0';
        carry = sum / 2;
        k++;
    }

    res[k] = '\0';
    while (k > 1 && res[k - 1] == '0') {
        k--;
    }

    for (i = k - 1; i >= 0; i--) {
        printf("%c", res[i]);
    }
    printf("\n");

    return 0;
}