#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    scanf("%s", word);
    int alphabet[26], length, index;
    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }
    length = strlen(word);
    for (int i = 0; i < length; i++) {
        index = word[i] - 'a';
        if (alphabet[index] == -1) {
            alphabet[index] = i;
        }
        else {
            continue;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d\n", alphabet[i]);
    }
    return 0;
}