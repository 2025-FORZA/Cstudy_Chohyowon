#include <stdio.h>
#include <string.h>

int main() {
    char s[60];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);

    if (len > 0 && s[len - 1] == '\n') s[len - 1] = '\0', len--;

    if (len >= 2 && s[0] == '"' && s[len - 1] == '"') {
        if (len == 2) printf("CE");
        else {
            for (int i = 1; i < len - 1; i++)
                putchar(s[i]);
        }
    }
    else {
        printf("CE");
    }

    return 0;
}
