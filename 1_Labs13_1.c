#include <stdio.h>

int main() {
    char word[1000001];
    int counts[26] = { 0 };
    scanf("%s", word);

    int i = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            counts[word[i] - 'a']++;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z') {
            counts[word[i] - 'A']++;
        }
        i++;
    }
    int max_count = 0;
    int max_index = 0;
    int duplicate = 0;

    for (int j = 0; j < 26; j++) {
        if (counts[j] > max_count) {
            max_count = counts[j];
            max_index = j;
            duplicate = 0;
        }
        else if (counts[j] == max_count) {
            duplicate = 1;
        }
    }
    if (duplicate) {
        printf("?\n");
    }
    else {
        printf("%c\n", max_index + 'A');
    }
    return 0;
}