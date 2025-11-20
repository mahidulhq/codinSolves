#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    
    while (t--){
        int n,y;
        scanf("%d %d",&n,&y);

        int tan = n - y;
        printf("%d\n",tan);
    }
    return 0;
}