#include <stdio.h>

int main() {
	int t,x,y;
	scanf("%d",&t);

    while(t--){
        scanf("%d %d",&x,&y);

        int r = x + 200;
        if(x <= y && y <= r){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}