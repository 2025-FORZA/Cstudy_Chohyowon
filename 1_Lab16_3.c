#include <stdio.h>
#include <string.h>

int main() {
    int T, i, j;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        char ps[51];
        int stack = 0;
        int is_vps = 1;

        scanf("%s", ps);

        for (j = 0; j < strlen(ps); j++) {
            if (ps[j] == '(') {
                stack++;
            }
            else if (ps[j] == ')') {
                stack--;
            }

            if (stack < 0) {
                is_vps = 0;
                break;
            }
        }

        if (stack != 0) {
            is_vps = 0;
        }

        if (is_vps) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}