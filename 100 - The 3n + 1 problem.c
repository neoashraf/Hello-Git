#include<stdio.h>
int main(){
    long long int num1,num2,s,i,k,p,max;
    while(scanf("%lld  %lld",&num1,&num2)==2){
    printf("%lld %lld",num1,num2);
    if(num1>num2){
        s=num2;
        num2=num1;
        num1=s;
    }
    max=1;
    for(i=num1;i<=num2;i++){
        p=i;
        k=1;
        while(p>1){
            if(p%2==0)
                p/=2;
            else
                p=(3*p)+1;
            k++;
        }
        if(k>max)
            max=k;
    }
    printf(" %lld\n",max);
}
    return 0;
}
