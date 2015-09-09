#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,a[200][3],i,gj,high,c,k,j;
    long long int v[110],va=0,hightoo=0;
    while(scanf("%d",&t)){
        if(t==0)
            break;
        for(i=0;i<t;i++){
            scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
        }
        high=a[0][2];
         gj=0;
        for(i=1;i<t;i++){
            if(a[i][2]>high){
                high=a[i][2];
                gj=i;
                c=1;
            }
        }
        k=0;
        for(i=gj;i<t;i++){
            if(a[i][2]==high){
                    c=0;
                    v[k]=a[i][0]*a[i][1]*a[i][2];
                    k++;
            }
        }

        if(c){
            va=a[gj][0]*a[gj][1]*a[gj][2];
            printf("%lld\n",va);
        }
        else{
           hightoo= v[0];
            for(j=1;j<k;j++){
                if(v[j]>hightoo)
                    hightoo=v[j];
        }
            printf("%lld\n",hightoo);
        }

    }
    return 0;
}
