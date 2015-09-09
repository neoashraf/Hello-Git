#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,ii,l,temp,j,d=0,x=10000,result[101],sample2[101];
    char sample[101];
    for(i=0;i<=100;i++)
        result[i]=0;
    while(1){
        for(ii=100;ii>=0;ii--){
            scanf("%c",&sample[ii]);
        if(sample[ii]=='\n')
            break;
        }
        if((sample[100]-'0')==0)
            break;
        for(i=100;i>ii;i--)
            sample2[i]=sample[i]-'0';

        for(i=100,j=ii+1;i>j;i--,j++){
            temp=sample2[j];
            sample2[j]=sample2[i];
            sample2[i]=temp;
        }
        d=0;
        if(x<ii+1)
            l=x;
        else
            l=ii;
        for(j=100;j>l;j--){
            result[j]=result[j]+sample2[j]+d;
            if(result[j]>9){
                d=1;
                result[j]%=10;
            }
            else
                d=0;
        }
        if(d){
            result[j]+=d;
            x=j;
        }
        else
            x=j+1;
        }
    if(d){
        for(i=j;i<=100;i++)
            printf("%d",result[i]);
        printf("\n");
    }
    else{
        for(i=j+1;i<=100;i++)
            printf("%d",result[i]);
        printf("\n");
    }
    return 0;
}
