#include<stdio.h>
#include<stdlib.h>
int main(){
    int cig,c,butt,d,cc;
    while(scanf("%d %d",&cig,&butt)!=EOF){
        c=cig;
        while(c>=butt){
            d=c%butt;
            c=c/butt;
            cig+=c;
            if(d)
                c+=d;
        }
        printf("%d\n",cig);
    }
    return 0;
}
