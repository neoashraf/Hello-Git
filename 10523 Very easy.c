#include<stdio.h>
#include<math.h>
int main(){
    int i,n,a,sum=0,p;
    while(scanf("%d %d",&n,&a)!=EOF){
        for(i=1;i<=n;i++){
            p=pow(a,i);
            sum+=(i*p);
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}



main solution in jaa directory
