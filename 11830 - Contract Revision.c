#include<stdio.h>
#include<string.h>
int n,i,c,l;
char ch,origin[1005];
int main(){
     while(1){
        scanf("%c",&ch);
        getchar();
        scanf("%s",origin);
        getchar();
        if(ch=='0'&&!strcmp("0",origin))
            break;
        l=strlen(origin);
        c=0;
        for(i=0;i<l;i++){
            if(origin[i]==ch){
                continue;
            }
            else{
                if(origin[i]>'0'&&origin[i]<='9'){
                    c=1;
                    printf("%c",origin[i]);
                }
                else if(c && origin[i]=='0')
                    printf("%c",origin[i]);
            }
        }
        if(!c)
            printf("0");
        printf("\n");
     }
     return 0;
}
