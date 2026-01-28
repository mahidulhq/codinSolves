#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int n;
        scanf("%d", &n);
        
        int a[101];
        for(int i=0; i<=n; i++) {
            scanf("%d", &a[i]);
        }
        
        int ans = 1000;
        for(int i=1; i<=n; i++) {
            int loud = (a[i-1] > a[i] ? a[i-1] : a[i]);
            if(loud < ans) ans = loud;
        }
        
        printf("%d\n", ans);
    }
    return 0;
}
