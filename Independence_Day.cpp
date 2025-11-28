#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X < 15) {
        printf("%d\n", 15 - X);
    } else if (X == 15) {
        printf("0\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
