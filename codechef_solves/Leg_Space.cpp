#include <stdio.h>

int main() {
	int n,m;
    scanf("%d %d",&n,&m);

    int chef = n - m;
    if(chef != 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}