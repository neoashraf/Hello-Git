#include<stdio.h>
#include<string.h>
int main(){
    int i,j,l,c1,c2,c3,t;
    char str[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%s",str);
        l=strlen(str);
        c1=0;
        c2=0;
        c3=0;
        for(j=0;j<l;j++){
            if(l==3){
                if(str[j]=='o'||str[j]=='n'||str[j]=='e')
                    c1++;
                if(str[j]=='t'||str[j]=='w'||str[j]=='o')
                    c2++;
            }
           else{
                if(str[j]=='t'||str[j]=='h'||str[j]=='r'||str[j]=='e')
                c3++;
           }
        }
        if(c1>=2 && c1>=c2)
            printf("1\n");
        else if(c2>=2)
            printf("2\n");
        else if(c3>=4)
            printf("3\n");
    }
    return 0;
}
