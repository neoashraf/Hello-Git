#include<stdio.h>
int main(){
    int t,i,j,n,sec[25],m1=0,m2=0,d1,d2;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            scanf("%d",&sec[j]);
            d1=sec[j]/30;
            d2=sec[j]/60;
            d1++;
            d2++;
            m1=m1+(d1*10);
            m2=m2+(d2*15);
        }
        if(m1<m2)
            printf("Case %d: Mile %d\n",i,m1);
        else if(m2<m1)
            printf("Case %d: Juice %d\n",i,m2);
        else
            printf("Case %d: Mile Juice %d\n",i,m1);
        m1=0;m2=0;
    }
    return 0;
}
