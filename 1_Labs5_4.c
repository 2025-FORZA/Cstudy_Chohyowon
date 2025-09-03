#include <stdio.h>
#include <string.h>

int to_idx(char c) {
    if (c == 'A') return 0;
    if (c == 'G') return 1;
    if (c == 'C') return 2;
    return 3; // 'T'
}

int main() {
    int n;
    scanf("%d", &n);
    char s[1000001];
    scanf("%s", s);

    char rule[4][4] = {
        {'A', 'C', 'A', 'G'},
        {'C', 'G', 'T', 'A'},
        {'A', 'T', 'C', 'G'},
        {'G', 'A', 'G', 'T'}
    };

    char current_result = s[n - 1];

    for (int i = n - 2; i >= 0; --i) {
        int idx1 = to_idx(s[i]);
        int idx2 = to_idx(current_result);
        current_result = rule[idx1][idx2];
    }

    printf("%c\n", current_result);

    return 0;
}
