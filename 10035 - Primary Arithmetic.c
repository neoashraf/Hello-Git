#include<stdio.h>
#include<string.h>
int main(){
    long long d,d1,d2,c=0,cd=0,n,nn,n1,n2;
    char cs1[100],cs2[100];
    while(scanf("%s %s",&cs1,&cs2)==2){
            cd=0;
           sscanf(cs1,"%lld",&n1);
             sscanf(cs2,"%lld",&n2);
        if(n1==0 && n2==0&&strlen(cs1)==1&&strlen(cs2)==1)
            break;
            n=n1;
            nn=n2;
        d1=0;d2=0;
        while(n>0|| nn>0){
            d1=n%10;
            d2=nn%10;
            n=n/10;
            nn=nn/10;
            if(cd==0)
                d=d1+d2;
            else
                d=d1+d2+1;
            if(d>=10){
                c++;
                cd=1;
            }
            else
                cd=0;
          //  printf("%lld %lld %lld\n",d1,d2,d);
        }
        if(c>1)
            printf("%lld carry operations.\n",c);
        else if(c==1)
            printf("%lld carry operation.\n",c);
        else
            printf("No carry operation.\n");

        c=0;
    }
return 0;
}
