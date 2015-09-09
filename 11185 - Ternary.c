#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int dec,d;
    int i,ter[1000],c,j,swap;
    while(scanf("%lld",&dec)){
        if(dec<0)
            break;
        else if(dec==0){
            printf("%d\n",dec);
            continue;
        }
        d=dec;
        c=0;
        while(d!=0){
            ter[c]=d%3;
            d/=3;
            c++;
        }
        for(i=0,j=c-1;i<=j;i++,j--){
            swap=ter[j];
            ter[j]=ter[i];
            ter[i]=swap;
        }
        for(i=0;i<c;i++)
            printf("%d",ter[i]);
        printf("\n");
    }
    return 0;
}
