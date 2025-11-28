#include <stdio.h>
int main(){
    int t,c,x,y;
    scanf("%d",&t);

    while(t--){
        scanf("%d %d %d",&c,&x,&y);
        
        int need = c-x;
        int minimumCost = need * y;
        printf("%d\n",minimumCost);
    }
    return 0;
}