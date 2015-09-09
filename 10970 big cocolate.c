#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,p;
    while(scanf("%d %d",&m,&n)!=EOF){
        p=(n-1)+((m-1)*n);
        printf("%d\n",p);
    }
    return 0;
}
