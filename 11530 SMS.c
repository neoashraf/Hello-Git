#include<stdio.h>
#include<string.h>
int main(){
    int i,m,n,o,t,l,press,g;

    char input[][5]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"," ",""};
    char totest[101];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++){
       gets(totest);
        l=strlen(totest);
        press=0;
        for(m=0;m<l;m++){
            g=0;
            for(n=0;input[n ][0];n++){
                for(o=0;input[n][o];o++){
                    if(totest[m]==input[n][o]){
                        g=1;
                        press+=(o+1);
                        break;
                    }
                }
                if(g==1)
                    break;
            }
        }
        printf("Case #%d: %d\n",i,press);
    }
    return 0;
}
