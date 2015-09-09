#define SIZE 102
#include <stdio.h>
#include<math.h>

bool  flag[SIZE];
int pfactors[SIZE][SIZE];

int sieve();
int primefactorize();

int main(){
    sieve();
    primefactorize();
    int n,i,j,p,k,pprinted;
    while(scanf("%d",&n)!=EOF){
        if(!n)
            break;
        if(n>100 || n==1)
            continue;
        printf("%3d! =",n);
        p=0;
        for(i=2;i<=n;i+=2)
            p+=pfactors[i][2];
        pprinted=1;
        printf("%3d",p);
        for(j=3;j<=n;j+=2){
            if(!flag[j]){
                k=1;p=0;
                for(i=j;i<=n; ){
                    p+=pfactors[i][j];
                    k++;
                    i=k*j;
                }
                pprinted++;
                if(pprinted==16){
                    printf("\n");
                    printf("      ");
                    printf("%3d",p);
                }
                else{
                    printf("%3d",p);
                }
            }
        }
        printf("\n");
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

int primefactorize(){
    int i,n,j;
    for(i=2;i<=SIZE;i++){
        if(!flag[i]){
            pfactors[i][i]=1;
        }
        else{
            n=i;
            while(!(n%2)){
                pfactors[i][2]++;
                n/=2;
            }
            for(j=3;j<=sqrt(n);j+=2){
                while(!(n%j)){
                    pfactors[i][j]++;
                    n/=j;
                }
            }
            if(n>2){
                pfactors[i][n]++;
            }
        }
    }
}
