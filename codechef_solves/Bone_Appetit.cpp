#include<stdio.h>
int main(){
    int n,m,x,y;
    scanf("%d %d",&n,&m);
    scanf("%d %d",&x,&y);

    int total = (n*x) + (m*y);
    printf("%d",total);
    return 0;
}