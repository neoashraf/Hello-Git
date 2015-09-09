#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if(a==b && b!=c)
            printf("C\n");
        else if(a==c && b!=c)
            printf("B\n");
        else if(b==c && a!=c)
            printf("A\n");
        else
            printf("*\n");
    }
    return 0;
}
