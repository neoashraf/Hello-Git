long long int per(long long int x);
#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int n,m,r,p,q,q1,q2;
    while(scanf("%lld %lld",&m,&n)!=EOF){
        if(m==0&&n==0)
            break;
        p=m*n;
        q1=per(p);
        q2=per(p-2);
        q=q1/q2;
        printf("%lld\n",q);
    }
    return 0;
}
long long int per(long long int x){
    int y;
    if(x==1)
        return 1;
    else{
        y=x*per(x-1);
        return y;
    }
}
