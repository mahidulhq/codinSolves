#include <stdio.h>

int main() {
	int t,x,y;
    scanf("%d",&t);

    while(t--){
        scanf("%d %d",&x,&y);
        if(x < 50){
            printf("Z\n");
        } else if(y < 50){
            printf("F\n");
        } else {
            printf("A\n");
        }
    }
    
    return 0;
}