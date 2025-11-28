#include <stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&x);

        int l = 100 - x;
        printf("%d\n",l);
    }
    return 0;
}