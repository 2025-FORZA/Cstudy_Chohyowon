#include <stdio.h>
#include <string.h>

int main() {
    char s[81];
    int len, i;

    while (1) {
        fgets(s, 81, stdin);

        len = strlen(s);
        if (s[len - 1] == '\n') {
            s[len - 1] = '\0';
            len--;
        }

        if (strcmp(s, "***") == 0) {
            break;
        }

        for (i = len - 1; i >= 0; i--) {
            printf("%c", s[i]);
        }
        printf("\n");
    }

    return 0;
}