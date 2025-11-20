#include<stdio.h>
#include<string.h>


int main()
{
    char s[1001];
    int i,n,l;
    scanf("%s",s);


    l = strlen(s);
    for(i = 0; i <= l; i++){
        if(i == 0){
            if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i]-32;
            printf("%s",s);
        }

    }
}