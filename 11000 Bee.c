#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int m,t,n,c,i;
    while(scanf("%lld",&n)!=EOF){
        if(n<0)
            break;
            m=0;
            t=1;
        for(i=1;i<=n;i++){
            c=m;
            m=t;
            t=m+c+1;
        }
         printf("%lld %lld\n",m,t);

    }
    return 0;
}
//do it via fibonacci
