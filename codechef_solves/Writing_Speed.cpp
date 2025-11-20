#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    int time = x * 5;
    if(time <= 60){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}