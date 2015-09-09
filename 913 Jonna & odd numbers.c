#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int n,i,s,sum;
    while(scanf("%lld",&n)!=EOF){
        s=0;
        sum=0;
        for(i=n;i>=1;i=i-2)
            s+=i;
        for(i=s-1;i>=s-3;i--)
            sum+=(2*i+1);
        printf("%lld\n",sum);
    }
    return 0;
}
