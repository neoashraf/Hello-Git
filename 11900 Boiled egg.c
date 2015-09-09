#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n,p,q,i,j,k,ar[100],sum,temp,indicator=0,indicator2=0;
    scanf("%d",&t);
    i=1;
    while(i<=t){
        scanf("%d%d %d",&n,&p,&q);
        for(j=1;j<=n;j++){
            scanf("%d",&ar[j]);
        }
        for(j=1;j<=n;j++){
        for(k=1;k<n-j;k++){
            if(ar[k]>ar[k+1]){
                temp=ar[k];
                ar[k]=ar[k+1];
                ar[k+1]=temp;
            }
        }
        }
        if(p<=n){
            sum=0;
            for(j=1;j<=p;j++){
                sum+=ar[j];
                if(sum>q){
                    indicator=1;
                    break;
            }
            }
            if(indicator)
                printf("Case %d: %d\n",i,j-1);
            else
                printf("Case %d: %d\n",i,p);
        }

        else{                                        //p greater than na
            sum=0;
            for(j=1;j<=n;j++){
                sum+=ar[j];
                if(sum>q){
                    indicator2=1;
                    break;
            }
            }
            if(indicator2)
                printf("Case %d: %d\n",i,j-1);
            else
                 printf("Case %d: %d\n",i,n);
        }
    indicator=0;
    indicator2=0;
    i++;
    }
    return 0;
}


6
5 5 100
20 20 20 20 20
10 1 45
1 2 3 4 5 6 7 8 9 9
1 10 60
30 45 60
3 10 29
45 46 47
3 3 6
1 2 3
5 4 7
1 2 3 4 5
