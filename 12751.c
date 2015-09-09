#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k,x,t,i=1,j,a[1100],s=0;
    scanf("%d",&t);
    while(i<=t){
        scanf("%d %d %d",&n,&k,&x);
        for(j=1;j<=n;j++){
            if(j>=x && j<(x+k))
                a[j]=0;
            else
                a[j]=j;
        s+=a[j];
        }
        printf("Case %d: %d\n",i,s);
        i++;
        s=0;
    }
    return 0;
}
