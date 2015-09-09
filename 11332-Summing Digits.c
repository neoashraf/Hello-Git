#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int n,s,i,r,slice;
    while(scanf("%lld",&n)!=EOF){
        if(n==0)
            break;
        slice=n;
        s=2100000000;
        while(s>=10){
            s=0;
        while(slice>0){
            r=slice%10;
            s+=r;
            slice/=10;
        }
        slice=s;
        }
        printf("%d\n",s);
    }
    return 0;
}
