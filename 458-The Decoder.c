#include<stdio.h>
#include<string.h>
int main(){
    int d,s,i;
    char a[1000000];
    while(scanf("%s",a)!=EOF){
        s=strlen(a);
        for(i=0;i<s;i++){
            d=(int)a[i];
            d=d-7;
            printf("%c",d);
        }
    printf("\n");
    }
    return 0;
}
