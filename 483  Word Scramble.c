#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,j,l,k;
    char str[100000];
    while(gets(str)){
        l=strlen(str);
        k=0;
        for(i=0;i<=l;i++){
            if(str[i]==' '){
                for(j=i-1;j>=k;j--)
                    printf("%c",str[j]);
                printf(" ");
                k=i+1;
            }
            if(str[i]=='\0'){
                for(j=i-1;j>=k;j--)
                printf("%c",str[j]);
                k=i+1;
            }
        }
        printf("\n");
    }
    return 0;
}
