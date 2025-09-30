#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main() {
    char line[MAX_LENGTH];
    int count;

    while (1) {
        if (scanf("%[^\n]", line) != 1) {
            break;
        }

        scanf("%*c");

        if (strcmp(line, "#") == 0) {
            break;
        }

        count = 0;

        for (int i = 0; i < strlen(line); i++) {
            char ch = line[i];

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}