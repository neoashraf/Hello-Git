#include<stdio.h>
int main(){
    long long int i,n,s,d,a,b;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&s,&d);
    if(d>s)
        printf("impossible\n");
    else if((s+d)%2!=0||(s-d)%2!=0)
        printf("impossible\n");
    else{
        a=(s+d)/2;
        b=(s-d)/2;
        printf("%lld %lld\n",a,b);
    }
    }
    return 0;
}
