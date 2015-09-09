#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,d,l,td,count,i;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)){
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        count=0;
        for(i=0;i<=l;i++){
            td=(a*i*i)+(b*i)+c;
            if(td%d==0)
                count++;

        }
        printf("%d\n",count);
    }
    return 0;
}
