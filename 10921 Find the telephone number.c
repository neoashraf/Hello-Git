#include<stdio.h>
#include<stdlib.h>
int main(){
    int num[8]={2,3,4,5,6,7,8,9},i,j,k,d=0;
    char numbers[9][5]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ","\0"},sample[33];
    while(gets(sample)){
        for(i=0;sample[i]!='\0';i++){
            if(sample[i]=='0'||sample[i]=='1'||sample[i]=='-')
                printf("%c",sample[i]);
            else{
                for(j=0;numbers[j][0]!='\0';j++){
                    for(k=0;numbers[j][k]!='\0';k++){
                        if(sample[i]==numbers[j][k]){
                            d=1;
                            break;
                        }
                    }
                    if(d)
                        break;
                }
                printf("%d",num[j]);
                d=0;
            }
        }
        printf("\n");
    }
    return 0;
}
