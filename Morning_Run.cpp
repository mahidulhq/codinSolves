#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);

    int total = 2 * (x + y);
    if(total >= 1000){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}