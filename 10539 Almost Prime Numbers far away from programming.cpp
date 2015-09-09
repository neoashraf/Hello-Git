#define TSIZE 1000000000000LL
#include<stdio.h>
#include<math.h>
bool  flag[TSIZE];
int almostprimes[TSIZE];

void sieve();
void findalmostprimes();
int main(){
    int n,i,j;
    sieve();
    findalmostprimes();
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&i,&j);
        if(i==1 || !flag[i])
            printf("%d\n",almostprimes[j]-almostprimes[i]);
        else
            printf("%d\n",almostprimes[j]-almostprimes[i]+1);
    }
    return 0;
}


void sieve(){
    long long int i,j,sv;
    sv=sqrt(TSIZE);
    flag[0]=1;flag[1]=1;
    for(i=4;i<=TSIZE;i+=2){
        flag[i]=1;
    }
    for(i=3;i<=sv;i++){
        if(!flag[i]){
            for(j=i*i;j<=TSIZE;j+=(2*i))
                flag[j]=1;
        }
    }
}

void findalmostprimes(){
    long long int i,j,k,n,c,dh,d;
    almostprimes[1]=0;
    for(i=2;i<=TSIZE;i++){
        if(!flag[i]){
            almostprimes[i]=almostprimes[i-1];
        }
        else{
            n=i;
            c=0;
            while(n%2==0){
                n/=2;
                c=1;
            }
            d=0;
            for(j=3;j<=sqrt(n);j+=2){
                dh=0;
                while(n%j==0){
                    dh=1;
                    n/=j;
                }
                if(dh)
                    c++;
                if(c==2){
                    almostprimes[i]=almostprimes[i-1];
                    d=1;
                    break;
                }
            }
            if(!d){
                if(n>2)
                    c++;
                if(c==1)
                    almostprimes[i]=almostprimes[i-1]+1;
                if(c>=2)
                    almostprimes[i]=almostprimes[i-1];
            }
        }
    }
}
