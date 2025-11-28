#include<stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);

    while(t--){
    scanf("%d",&x);

    if(x < 3){
        printf("LIGHT\n");
    }
    else if(3 <= x && x < 7){
        printf("MODERATE\n");
    }
    else if(x >= 7){
        printf("HEAVY\n");
    }
}
    return 0;
}