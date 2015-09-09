#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,d,r,a[101],b[101],c[101],dd=0,ddd=0,i;
    while(scanf("%d %d %d",&n,&d,&r)){
        if(n==0 && d==0 && r==0)
            break;
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++){
            scanf("%d",&b[i]);
        }
        for(i=1;i<=n;i++){
            c[i]=a[i]+b[i];
        }
        for(i=1;i<=n;i++){
            dd=c[i]-d;
            ddd+=dd;
        }
        if(ddd>0)
            printf("%d\n",ddd*r);
        else
            printf("0\n");
        dd=0;
        ddd=0;
    }
    return 0;
}
