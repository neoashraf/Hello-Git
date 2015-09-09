#define TSIZE 1000001
#define PSIZE 78500
#include <bits/stdc++.h>
using namespace std;

bool  flag[TSIZE];
int isolatedprimes[PSIZE];
void sieve();
void primesisolated();

int main(){
    sieve();
    primesisolated();
    int num,n,d;
    while(cin>>num){
        if(num==0)
            break;
        n=num/2;
        for(int i=0;isolatedprimes[i]<=n;i++){
            d=num-isolatedprimes[i];
            if(!flag[d]){
                cout<<num <<" = "<< isolatedprimes[i] <<" + "<< d<<endl;
                break;
            }
        }
    }
    return 0;
}


void sieve(){
    int sv,i,j;
    sv=sqrt(TSIZE);
    flag[0]=1;flag[1]=1;
    for(i=4;i<=TSIZE;i+=2){
        flag[i]=1;
    }
    for(i=3;i<=sv;i++){
        if(!flag[i]){
            for(j=i*i;j<=TSIZE;j+=(2*i) )
                flag[j]=1;
        }
    }
}

void primesisolated(){
    int i,j;
    for(i=2,j=0;i<=TSIZE;i++){
        if(!flag[i]){
            isolatedprimes[j]=i;
            j++;
        }
    }
}
