#include <stdio.h>

void sort_row(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
        sort_row(arr[i], m);
    }

    int score[n];
    for (int i = 0; i < n; i++) {
        score[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int temp = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j][m - i - 1] > temp) {
                temp = arr[j][m - i - 1];
            }
        }
        for (int j = 0; j < n; j++) {
            if (temp == arr[j][m - i - 1]) {
                score[j]++;
            }
        }
    }

    int max_score = 0;
    for (int i = 0; i < n; i++) {
        if (score[i] > max_score) {
            max_score = score[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (max_score == score[i]) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}