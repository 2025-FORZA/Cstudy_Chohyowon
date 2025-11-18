#include <stdio.h>

int main() {
   
    char s[102];
    int lower, upper, digit, space;
    while (fgets(s, sizeof(s), stdin) != NULL) {
        lower = 0;
        upper = 0;
        digit = 0;
        space = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            
            if (s[i] == '\n') {
                continue; 
            }

            if (s[i] >= 'a' && s[i] <= 'z') {
                lower++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                upper++;
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                digit++;
            }
            else if (s[i] == ' ') {
                space++;
            }
        }

        printf("%d %d %d %d\n", lower, upper, digit, space);
    }
    return 0;
}