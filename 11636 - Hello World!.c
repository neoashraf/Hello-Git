#include<stdio.h>
#include<stdlib.h>
int main(){
    int h,c=0,p,fc,d;
    while(scanf("%d",&h)){
        fc=0;
        c++;
        if(h<0)
            break;
        else if(h>1){
            p=1;
            while(p<h){
                d=h-p;
                if(d>=p)
                    p=p+p;
                else
                    p=p+h;
            fc++;
        }
            printf("Case %d: %d\n",c,fc);
        }
        else if(h==1){
            printf("Case %d: 0\n",c);
        }
    }
    return 0;
}

