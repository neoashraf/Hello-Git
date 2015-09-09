#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum,s,i,j,h[100],hig;
    j=1;
    while(scanf("%d",&n)){
        if(n==0)
            break;
        sum=0;
        for(i=1;i<=n;i++){
            scanf("%d",&h[i]);
            sum+=h[i];
        }
        hig=sum/n;
        s=0;
        for(i=1;i<=n;i++){
            if(h[i]>hig){
                s+=(h[i]-hig);
            }
        }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n",s);
        printf("\n");
        j++;
    }
    return 0;
}
