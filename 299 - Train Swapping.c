#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,l,ar[51],i,j,bal,tt;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&l);
        for(i=0;i<l;i++){
            scanf("%d",&ar[i]);
        }
        bal=0;
        for(i=0;i<l;i++){
            for(j=0;j<l-i-1;j++){
                if(ar[j]>ar[j+1]){
                    tt=ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=tt;
                    bal++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",bal);
    }
    return 0;
}

