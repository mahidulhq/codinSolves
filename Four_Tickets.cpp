#include<stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);

    while(t--){
        scanf("%d", &x);
        
        int cost = x * 4;
        if(cost <= 1000){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}