#include<stdio.h>
#include<stdlib.h>
int main(){
    char sample[25];
    int outputar[25];
    int l,i,j,k,p=0;
    while(gets(sample)!=NULL){
        l=strlen(sample);
        j=0;
        for(i=0;i<l;i++){
            if(p!=1&&(sample[i]=='B'||sample[i]=='F'||sample[i]=='P'||sample[i]=='V')){
                outputar[j]=1;
                j++;
                p=1;
            }
            else if(p!=2&&(sample[i]=='C'||sample[i]=='G'||sample[i]=='J'||sample[i]=='K'||sample[i]=='Q'||sample[i]=='S'||sample[i]=='X'||sample[i]=='Z')){
                outputar[j]=2;
                j++;
                p=2;
            }
            else if(p!=3&& (sample[i]=='D'||sample[i]=='T')){
                outputar[j]=3;
                j++;
                p=3;
            }
            else  if(p!=4&&sample[i]=='L'){
                outputar[j]=4;
                j++;
                p=4;
            }
            else if(p!=5&&(sample[i]=='M'||sample[i]=='N')){
                outputar[j]=5;
                j++;
                p=5;
            }
            else if(p!=6&& sample[i]=='R'){
                outputar[j]=6;
                j++;
                p=6;
            }
            else if(sample[i]=='A'||sample[i]=='E'||sample[i]=='I'||sample[i]=='O'||sample[i]=='U'||sample[i]=='H'||sample[i]=='W'||sample[i]=='Y')
                p=0;
        }
            for(k=0;k<j;k++)
                printf("%d",outputar[k]);
            printf("\n");
    }
    return 0;
}
