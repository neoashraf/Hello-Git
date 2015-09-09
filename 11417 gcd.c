#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,n,i,j,gcd,r;
    long long int g;
    while(scanf("%d",&n)){
        if(n==0)
            break;
        g=0;
        for(a=1;a<n;a++){
            for(b=a+1;b<=n;b++){
                i=a;
                j=b;
                r=j%i;
                if(r==0)
                    gcd=i;
                else{
                    while(r!=0){
                    j=i;
                    i=r;
                    r=j%i;
                }
                gcd=i;
                }
                g+=gcd;
           }
        }
    printf("%lld\n",g);
    }
    return 0;
}
