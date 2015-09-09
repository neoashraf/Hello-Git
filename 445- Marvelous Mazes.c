#include<stdio.h>
#include<string.h>
char sample[100000000];
int main(){
    int i,j,sum=0;
    while(gets(sample)){
        for(i=0;i<strlen(sample);i++){
            if(sample[i]>='0' && sample[i]<='9'){
                sum+=(sample[i]-'0');
            }
            else if( (sample[i]>='A' && sample[i]<='Z')||sample[i]=='*'){
                for(j=0;j<sum;j++)
                    printf("%c",sample[i]);
                sum=0;
            }
            else if(sample[i]=='b'){
                for(j=0;j<sum;j++)
                     printf(" ");
                sum=0;
            }
            else if(sample[i]=='!')
                printf("\n");
        }
        sum=0;
        printf("\n");
    }
    return 0;
}
