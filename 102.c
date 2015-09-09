#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],i,j,sum[7],min;
    while(scanf("%d",&a[1])!=EOF){
        for(i=2;i<10;i++){
            scanf("%d",&a[i]);
        }
        sum[1]=a[2]+a[3]+a[4]+a[5]+a[7]+a[9];
        sum[2]=a[2]+a[3]+a[4]+a[6]+a[7]+a[8];
        sum[3]=a[1]+a[2]+a[5]+a[6]+a[7]+a[9];
        sum[4]=a[1]+a[2]+a[4]+a[6]+a[8]+a[9];
        sum[5]=a[1]+a[3]+a[5]+a[6]+a[7]+a[8];
        sum[6]=a[1]+a[3]+a[4]+a[5]+a[8]+a[9];
        min=sum[1];
        j=1;
        for(i=2;i<=6;i++){
            if(sum[i]<min){
                min=sum[i];
                j=i;
            }
        }
        if(j==1)
            printf("BCG %d\n",min);
        else if(j==2)
            printf("BGC %d\n",min);
        else if(j==3)
            printf("CBG %d\n",min);
        else if(j==4)
            printf("CGB %d\n",min);
        else if(j==5)
            printf("GBC %d\n",min);
        else if(j==6)
            printf("GCB %d\n",min);
    }
    return 0;
}

