#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d %d %d",&n, &a, &b);

    int output = n - (a * b);
    printf("%d",output);
    return 0;
}