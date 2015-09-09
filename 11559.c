#include<stdio.h>
#include<math.h>
int main(){
    int n,b,h,w,wbed[15],max[20],min,i,j,cost,bill[20];
    while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF){
        for(i=1;i<=h;i++){
            scanf("%d",&cost);
            for(j=1;j<=w;j++){
                scanf("%d",&wbed[j]);
            }
            max[i]=wbed[1];
            for(j=2;j<=w;j++){
                if(wbed[j]>max[i])
                    max[i]=wbed[j];
            }
            if(max[i]>=n)
                bill[i]=cost*n;
            else{
                bill[i]=200000000;
                continue;
            }
        }
         min=bill[1];
         for(i=1;i<=h;i++){
            if(bill[i]<min)
                min=bill[i];
         }
         if(min<=b)
            printf("%d\n",min);
         else
            printf("stay home\n");
    }
    return 0;
}
