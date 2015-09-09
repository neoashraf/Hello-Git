#include<stdio.h>
int main(){
    int r,n,d,i=1,re,de;
    while(i){
        scanf("%d %d",&r,&n);
        if(r==0&&n==0)
            break;

        else if(r>n){
            d=r-n;
            re=d%n;
            de=d/n;
            if(re==0 && de<=26){
                printf("Case %d: %d\n",i,de);
            }
            else if(re<n && de<26)
                printf("Case %d: %d\n",i,de+1);
            else
                printf("Case %d: impossible\n",i);
        }
        else
            printf("Case %d: 0\n",i);
    i++;
    }
    return 0;
}
