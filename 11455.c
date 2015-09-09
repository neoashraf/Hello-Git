#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int a,b,c,d,ar[5],t,k=1,i,j,st;
    scanf("%lld",&t);
    while(k<=t){
        for(i=0;i<4;i++)
            scanf("%lld",&ar[i]);
        for(i=0;i<4;i++){
            for(j=0;j<3-i;j++){
                if(ar[j]>ar[j+1]){
                    st=ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=st;
                }
            }
        }
        a=ar[0];
        b=ar[1];
        c=ar[2];
        d=ar[3];
        if(a==0 || b==0 || c==0 ||d==0)
            printf("banana\n");
        else if(a==b && b==c && c==d)
            printf("square\n");
        else if(a==b && c==d)
            printf("rectangle\n");
        else if((a + b + c )>d)
            printf("quadrangle\n");
        else
            printf("banana\n");
        k++;
    }
    return 0;
}
