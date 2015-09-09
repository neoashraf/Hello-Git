#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int b,p,m,r;
    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF){
        r=1;
        while(p>0){
            if(p%2==1){
                r=(r*b)%m;
            }
            p/=2;
            b=(b*b)%m;
        }
        printf("%lld\n",r);
    }
    return 0;
}
