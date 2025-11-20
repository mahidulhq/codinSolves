#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int cost = n * 30;
    int sell = m * 50;
    int profit = sell - cost;
    printf("%d",profit);
    return 0;
}