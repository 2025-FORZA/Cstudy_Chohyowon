#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    int idx;
    char name[101];
} person;

int compare(const void* first, const void* second) {
    person* a = (person*)first;
    person* b = (person*)second;

    if (a->age != b->age)
        return a->age - b->age;
    return a->idx - b->idx;
}

int main() {
    int n;
    scanf("%d", &n);

    person* list = (person*)malloc(sizeof(person) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &list[i].age, list[i].name);
        list[i].idx = i;
    }

    qsort(list, n, sizeof(person), compare);

    for (int i = 0; i < n; i++)
        printf("%d %s\n", list[i].age, list[i].name);

    free(list);
    return 0;
}
