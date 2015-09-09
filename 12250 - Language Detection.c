#include<stdio.h>
#include<string.h>
int main(){
    int i,n=0;
    char s[15],a[7][2][15]={
        "HELLO","ENGLISH",
        "HOLA","SPANISH",
        "HALLO","GERMAN",
        "BONJOUR","FRENCH",
        "CIAO","ITALIAN",
        "ZDRAVSTVUJTE","RUSSIAN",
        " "," "
        };
   while(gets(s)){
    n++;
    if(!strcmp(s,"#"))
        break;
        i=0;
    while(strcmp(a[i][0]," ")){
        if(!strcmp(s,a[i][0])){
              printf("Case %d: %s\n",n,a[i][1]);
              break;
        }
        i++;
    }
    if(!strcmp(a[i][0]," "))
        printf("Case %d: UNKNOWN\n",n);
   }
   return 0;
}
