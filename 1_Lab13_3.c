#include <stdio.h>

int main() {
    int height[9];
    int sum = 0;
    int fake1 = -1, fake2 = -1;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &height[i]);
        sum += height[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - (height[i] + height[j]) == 100) {
                fake1 = height[i];
                fake2 = height[j];
                break;
            }
        }
        if (fake1 != -1) {
            break;
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i; j++) {
            if (height[j] > height[j + 1]) {
                int temp = height[j];
                height[j] = height[j + 1];
                height[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (height[i] != fake1 && height[i] != fake2) {
            printf("%d\n", height[i]);
        }
    }

    return 0;
}