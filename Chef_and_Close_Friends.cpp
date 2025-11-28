#include <stdio.h>

int main() {
    int t,x,y,z;
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d %d", &x, &y, &z);

        int l = 0;
        int r = 0;

        if (x - y < x - z) {
            l = (x - z) - (x - y);
        }
        if (x + y > x + z) {
            r = (x + y) - (x + z);
        }

        int result = 2 * y - l - r;

        if (result < 0){
            result = 0;
        }
        printf("%d\n", result);
    }
    return 0;
}
