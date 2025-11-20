#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int tLeaf = 4 + (3 * (n - 1));
    printf("%d",tLeaf);
    return 0;
}