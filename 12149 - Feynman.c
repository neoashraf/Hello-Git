#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,sum=0,n;
    while(scanf("%d",&n)){
        if(n==0)
            break;
        for(i=n;i>=1;i--)
            sum+=(i*i);
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
