#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,i,j,ii,jj,k,n,a[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
    for(k=0;k<=9;k++)
        a[k]=0;
    for(j=1;j<=n;j++){
        ii=j;
    while(ii>0){
        jj=ii%10;
        switch(jj){
        case 0:
            a[0]++;
            break;
        case 1:
            a[1]++;
            break;
        case 2:
            a[2]++;
            break;
        case 3:
            a[3]++;
            break;
        case 4:
            a[4]++;
            break;
        case 5:
            a[5]++;
            break;
        case 6:
            a[6]++;
            break;
        case 7:
            a[7]++;
            break;
        case 8:
            a[8]++;
            break;
        case 9:
            a[9]++;
            break;
        }
        ii/=10;
    }
    }
    for(k=0;k<9;k++)
        printf("%d ",a[k]);
    printf("%d\n",a[k]);
    }
    return 0;
}
