#define SIZE 1000000
#include<stdio.h>
#include<math.h>
bool  flag[SIZE];
int sum[SIZE], dp[SIZE];

int sieve();
int digprime();

int main(){
    int tc,j,t1,t2,i,s;
    sieve();
    digprime();
    scanf("%d",&tc);
    while(tc--){
        scanf("%d %d",&t1,&t2);
        if(t1>t2){
            s=t1;
            t2=t1;
            t2=s;
        }
        printf("%d\n",dp[t2]-dp[t1-1]);
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

int digprime(){
    int i,j;
    dp[0]=0;dp[1]=0;
    for(i=2;i<=SIZE;i++){
        if(!flag[i]){
            sum[i]=0;
            j=i;
            while(j>0){
                sum[i]=sum[i]+(j%10);
                j/=10;
            }
            if(!flag[ sum[i] ])
                dp[i]=dp[i-1]+1;
            else
                dp[i]=dp[i-1];
        }
        else
            dp[i]=dp[i-1];
    }
}
