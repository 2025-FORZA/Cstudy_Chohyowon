#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char pattern[51];
    char temp[51];

    scanf("%s", pattern);
    int len = strlen(pattern);

    for (int i = 1; i < N; i++) {
        scanf("%s", temp);
        for (int j = 0; j < len; j++) {
            if (pattern[j] != temp[j]) {
                pattern[j] = '?';
            }
        }
    }

    printf("%s\n", pattern);

    return 0;
}