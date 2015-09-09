 int f(int i);
#include<stdio.h>
#include<stdlib.h>
int main(){
    int p,q,i,t,j;
    while(scanf("%d %d",&p,&q)){
        if(p==-1 && q==-1)
            break;
            t=0;
        for(i=p;i<=q;i++){
            j=f(i);
            t+=j;
        }
    printf("%d\n",t);
    }
    return 0;
}
int f(int i){
    int j;
    if(i==0)
        return i;
    else if(i%10>0)
        return i%10;
    else
        j=f(i/10);
}


#include<stdio.h>
int main()
{
    long long int i,j,k,l,m,n,a,b,c,ar[11];
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
    if(n<0&&m<0)
    break;
    for(i=0,k=0;i<=9;i++)
    {
    k=k+i;
    ar[i]=k;
    }
    j=0;
    if(n!=0)
    n=n-1;
    while(n!=0)
    {
    a=(n/10)*45;
    j=j+a+ar[n%10];
    n/=10;
    }
    k=0;

    while(m!=0)
    {
    a=(m/10)*45;
    k=k+a+ar[m%10];
    m/=10;
    }
    printf("%lld\n",k-j);
    }
    return 0;
}
