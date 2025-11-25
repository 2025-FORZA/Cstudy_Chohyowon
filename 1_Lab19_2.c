#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    char* day_of_week[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    int total_days = 0;

    for (int i = 1; i < x; i++) {
        total_days += days_in_month[i];
    }

    total_days += y;
    int day_index = total_days % 7;

    printf("%s\n", day_of_week[day_index]);

    return 0;
}