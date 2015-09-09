#include<stdio.h>
#include<string.h>
int main(){
    int amount,operation_setu,total_amount=0,i=1;
    char  d[10],re[10];
    scanf("%d",&operation_setu);
    while(operation_setu--){
        scanf("%s",d);
        if(!strcmp(d,"donate"))
        {
            scanf("%d",&amount);
            total_amount+=amount;
        }
        else if(!strcmp(d,"report"))
            printf("%d\n",total_amount);
    }
    return 0;
}
