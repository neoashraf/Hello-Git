#define SIZE 20000000
#include<stdio.h>
#include<math.h>

bool  flag[SIZE];
int twinprime[100010];

int sieve();
int main(){
    sieve();
    int i,j,n;
    j=1;
    for(i=3;i<=SIZE;i+=2){
            if(!flag[i] && !flag[i+2]){
                twinprime[j]=i;
                j++;
            }
    }
    while(scanf("%d",&n)!=EOF){
        printf("(%d, %d)\n",twinprime[n],twinprime[n]+2);
    }
    return 0;
}

int sieve(){
    int sv,i,j;
    sv=sqrt(SIZE);
    flag[0]=1;flag[1]=1;
    for(i=4;i<=SIZE;i+=2){
        flag[i]=1;
    }
    for(i=3;i<=sv;i++){
        if(!flag[i]){
            for(j=i*i;j<=SIZE;j+=(2*i) )
                flag[j]=1;
        }
    }
}
