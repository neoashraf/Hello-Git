#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,i,j,o,oo,n,k,mm,dec,fdec,temp,aa[100],bb[100],c[100];
    while(scanf("%d %d",&a,&b)!=EOF){

        n=a;
        i=1;
        while(n!=0){
            aa[i]=n%2;
            n/=2;
            i++;
        }
        o=i-1;

        i=1;
        n=b;
        while(n!=0){
            bb[i]=n%2;
            n/=2;
            i++;
        }
        oo=i-1;

        if(o>=oo){
            for(i=1;i<=o;i++){
                if(i<=oo){
                    if(aa[i]==1 && bb[i]==1)
                        c[i]=0;
                    else
                        c[i]=aa[i]+bb[i];
                }
                else
                    c[i]=aa[i];
            }
        }
        else{
            for(i=1;i<=oo;i++){
                 if(i<=o){
                    if(aa[i]==1 && bb[i]==1)
                        c[i]=0;
                    else
                        c[i]=aa[i]+bb[i];
                }
                else
                    c[i]=bb[i];
            }
        }

        for(j=1,k=i-1;j<k;j++,k--){
            temp=c[j];
            c[j]=c[k];
            c[k]=temp;
        }
        mm=1;
        fdec=0;
        for(j=i-1;j>=1;j--){
            dec=c[j]*mm;
            mm=mm*2;
            fdec+=dec;
        }

        printf("%d\n",fdec);

    }
    return 0;
}
