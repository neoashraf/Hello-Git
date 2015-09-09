#define TSIZE 1000000000000LL
#define SIZE 1000000
#include<stdio.h>
#include<math.h>
bool  flag[SIZE];
int sum[SIZE];
long long int almostprime[SIZE];
int sieve();
int main(){
    sieve();
    long long int mulr;
    for(i=2,j=0;i<=SIZE;i++){

        while(mulr<=TSIZE){
            almostprime[j]=i;
            almostprime[j]*=i;
            j++;
        }
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
