#include <stdio.h>

int main() {
	int x,y;
    scanf("%d %d",&x,&y);

    int quralify = x - y;
    
    if(quralify >= 18){
        printf("RCB\n");
    } else if (quralify < 18){
        printf("CSK\n");
    }
    return 0;
}