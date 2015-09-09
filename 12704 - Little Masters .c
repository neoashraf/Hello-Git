#include<stdio.h>
int main(){
    int t,x,y,r,i;
    float shortest,longest,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&x,&y,&r);
        d=sqrt(x*x +y*y);
        shortest=(float)r-d;
        longest=(float)r+d;
        printf("%.2f %.2f\n",shortest,longest);
    }
    return 0;
}
