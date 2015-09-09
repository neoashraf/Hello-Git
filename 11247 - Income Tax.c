#include<stdio.h>
#include<string.h>
int main(){
    char cmd[111],t[111];
    int i,j;

    while(1){
     printf("Opearation X: Do what you like\n");
    gets(cmd);
    if(strcmp(cmd,"quit")==0)
        break;
    gets(t);
    i=atoi(t);
    gets(t);
    j=atoi(t);
    if(strcmp(cmd,"add")==0)
        printf("%d\n",i+j);
    else if(strcmp(cmd,"sub")==0)
        printf("%d\n",i-j);
    else if(strcmp(cmd,"div")==0){
        if(j)
            printf("%d\n",i/j);
    }
    else if(strcmp(cmd,"mul")==0)
        printf("%d\n",i*j);
    else
        printf("Kita ortam ami ete kita koi.\n");
    }
    return 0;
}
