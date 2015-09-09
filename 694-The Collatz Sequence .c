#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int a,l,num;
    int c,count=0;
    while(scanf("%lld %lld",&num,&l)){
        count++;
        if(num<0 && l<0)
            break;
        c=0;
        a=num;
        while(a<=l && a>=1){
            c++;
            if(a==1)
                break;
            else if(a%2==0)
                a/=2;
            else
                a=3*a +1;
        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",count,num,l,c);
    }
    return 0;
}
