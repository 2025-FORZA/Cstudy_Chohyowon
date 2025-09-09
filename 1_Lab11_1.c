#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[1000001];
    scanf("%s", s);

    int count0 = 0;
    int count1 = 0;
    bool in_a_group = false;

    if (s[0] == '0') {
        count0 = 1;
    }
    else {
        count1 = 1;
    }
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] != s[i - 1]) {
            if (s[i] == '0') {
                count0++;
            }
            else {
                count1++;
            }
        }

    }
    if (count0 < count1) {
        printf("%d\n", count0);
    }
    else {
        printf("%d\n", count1);
    }

    return 0;
}