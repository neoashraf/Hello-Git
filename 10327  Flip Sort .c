#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j,tosort[1000],count,temp;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++)
            scanf("%d",&tosort[i]);
        count=0;
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(tosort[j]>tosort[j+1]){
                    temp=tosort[j];
                    tosort[j]=tosort[j+1];
                    tosort[j+1]=temp;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
