#include<stdio.h>
int main(){
    int n,h,c,m,i=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d%c%d",&h,&c,&m);
    if(h==12)
        h=0;
    h=11-h;
    m=60-m;
    if(m==60){
        m=0;
        h=h+1;
    }
    if(h==0)
        h=12;
    if(m<10&&h<10)
        printf("0%d%c0%d\n",h,c,m);
    else if(h<10)
         printf("0%d%c%d\n",h,c,m);
    else if(m<10)
         printf("%d%c0%d\n",h,c,m);
    else
        printf("%d%c%d\n",h,c,m);
    i++;
    }
   return 0;
}
