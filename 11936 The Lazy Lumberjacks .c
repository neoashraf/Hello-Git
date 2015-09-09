#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[5],n,max,i,j,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++)
            scanf("%d",&a[j]);
        max=a[1];
        for(j=2;j<=3;j++){
            if(a[j]>max)
                max=a[j];
        }
        s=0;
        for(j=1;j<=3;j++){
            s+=a[j];
        }
        if(s-max> max)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
