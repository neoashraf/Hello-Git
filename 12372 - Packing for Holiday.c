#include<stdio.h>
int main(){
   int p=1,n,i,j,k;
   scanf("%d",&n);
   while(p<=n){
    scanf("%d %d %d",&i,&j,&k);
    if(i<=20&&j<=20&&k<=20)
        printf("Case %d: good\n",p);
    else if(i==0||j==0||k==0)
        printf("Case %d: bad\n",p);
    else
        printf("Case %d: bad\n",p);
    p++;
   }
}
