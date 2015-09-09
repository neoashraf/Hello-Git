#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,tc,t,min,sample[20];
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&sample[i]);
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
                if(sample[j]>sample[j+1]){
                    t=sample[j];
                    sample[j]=sample[j+1];
                    sample[j+1]=t;
                }
            }
        }
        min=sample[n]-sample[1];
        for(i=1;i<n;i++){
            min+=(sample[i+1]-sample[i]);
        }
        printf("%d\n",min);
    }
    return 0;
}
