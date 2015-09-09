#include<stdio.h>
#include<string.h>
int main(){
    int i,l,c,d;
    char ss[10000];
    while(gets(ss)!=NULL){
    l=strlen(ss);
    c=0;
    d=0;
    for(i=0;i<=l;i++){
        if(ss[i]>='A' && ss[i]<='Z' || ss[i]>='a' && ss[i]<='z')
            c++;
        else if( c>=1 && (ss[i]>=32 && ss[i]<=64) || (ss[i]>=91 && ss[i]<=96) ||(ss[i]>=123 && ss[i]<=126) ){
            d++;
            c=0;
        }
        else if(c>=1 && ss[i]=='\0')
            d++;
    }
    printf("%d\n",d);
    }
    return 0;
}
