#include<stdio.h>
int main(){
    int n,y;
    scanf("%d %d",&n,&y);

    int clearDay = 7 - (n + y);
    printf("%d",clearDay);
    return 0;
}