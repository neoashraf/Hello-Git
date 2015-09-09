#include<stdio.h>
#include<stdlib.h>
int main(){
    int l,p,i;
    long long int a[100];
    while(scanf("%d",&l)){
        if(l==0 || l>50)
            break;
        a[0]=1;
        a[1]=1;
        for(i=2;i<=l;i++){
            a[i]=a[i-1] + a[i-2];
        }
        printf("%lld\n",a[l]);
    }
    return 0;
}
