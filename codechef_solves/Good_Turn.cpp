#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, y;
        scanf("%d %d", &n, &y);
        if(n + y > 6){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
