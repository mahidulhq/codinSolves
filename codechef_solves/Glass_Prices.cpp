#include <stdio.h>

int main() {
    int n, y;
    scanf("%d %d", &n, &y);

    if (y <= 2 * n) {
        printf("METAL\n");
    } else {
        printf("PLASTIC\n");
    }

    return 0;
}