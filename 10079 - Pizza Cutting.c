#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int n_cut,s,i;
    while(scanf("%lld",&n_cut)!=EOF){
        if(n_cut<0)
            break;
        s=0;
        for(i=1;i<=n_cut;i++)
            s+=i;
        printf("%lld\n",s+1);
    }
    return 0;
}
