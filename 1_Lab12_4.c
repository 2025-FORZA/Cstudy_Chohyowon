#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char current_name[21];
    int current_attempts;

    char winner_name[21];
    int min_attempts = 101;

    for (int i = 0; i < N; i++) {
        scanf("%s %d", current_name, &current_attempts);

        if (current_attempts < min_attempts) {
            min_attempts = current_attempts;
            strcpy(winner_name, current_name);
        }
    }

    printf("%s\n", winner_name);

    return 0;
}