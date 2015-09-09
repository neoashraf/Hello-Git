#define SIZE 1000000
#include<stdio.h>
#include<math.h>

bool  flag[SIZE];
int isolatedprimes[SIZE];

void sieve();
void primesisolated();
int  main(){
    int i,j,d,split,n;
    sieve();
    primesisolated();
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        split=n/2;
        for(i=0; ;i++){
            if(isolatedprimes[i]>split){
                printf("%d:\n",n);
                puts("NO WAY!");
                break;
            }
            d=n-isolatedprimes[i];
            if(!flag[d]){
                printf("%d:\n%d+%d\n",n,isolatedprimes[i],d);
                break;
            }
        }
    }
    return 0;
}

void sieve(){
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

void primesisolated(){
    int i,j;
    for(i=2,j=0;i<=SIZE;i++){
        if(!flag[i]){
            isolatedprimes[j]=i;
            j++;
        }
    }
}
