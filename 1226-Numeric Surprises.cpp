#include<stdio.h>
#include<string.h>

int main(){
    char st[2500];
    long long int ei,e=0;
    int tc,l,div;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&div);
        scanf("%s",st);
        l=strlen(st);
        for(int i=0;i<l;i++){
        ei=st[i]-48;
        ei=e*10 + ei;
            e=ei%div;
        }
        printf("%lld\n",e);
        e=0;
    }
    return 0;
}



