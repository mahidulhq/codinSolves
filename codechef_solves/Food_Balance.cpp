#include <stdio.h>
#include <stdlib.h>

int main() {
    int f1, p1, f2, p2;
    scanf("%d %d %d %d", &f1, &p1, &f2, &p2);

    int d1 = abs(f1 - p1);
    int d2 = abs(f2 - p2);

    if (d1 < d2) {
        printf("First\n");
    } else if (d2 < d1) {
        printf("Second\n");
    } else {
        printf("Both\n");
    }

    return 0;
}