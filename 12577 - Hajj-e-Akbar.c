#include<stdio.h>
#include<string.h>
int main(){
    int str[10],i=1;
    while(1){
        gets(str);
        if(!strcmp(str,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(!strcmp(str,"Umrah"))
            printf("Case %d: Hajj-e-Asghar\n",i);
        else if(!strcmp(str,"*"))
            break;
        i++;
    }
    return 0;
}
