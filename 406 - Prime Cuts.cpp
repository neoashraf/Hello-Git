#define SIZE 1000001
#define PSIZE 79000
#include <bits/stdc++.h>
using namespace std;
bool  flag[SIZE];
int isolatedprimes[PSIZE],p;

void sieve();
void primesisolated();

int main(){
    sieve();
    primesisolated();
    int length,n,c,m,low,up,z=1;
    while(cin>>n>>c){
        cout<<n<<' '<<c<<':';
        length=0;
        while(isolatedprimes[length]<=n){
            length++;
        }
        if((c*2-1)>=length){
            for(int i=0;i<length;i++)
                cout<<' '<<isolatedprimes[i];
            cout<<endl;
            cout<<endl;
            continue;
        }
        else{
            m=!(length%2)?(length-1)/2:(length+1)/2;
            low=!(length%2)?(m+1-c+1):(m-c+1);
            up=!(length%2)?(m+2+c-1):(m+c-1);
            for(int i=low-1;i<up;i++)
                cout<<' '<<isolatedprimes[i];
            cout<<endl;
             cout<<endl;
        }

    }
    return 0;
}

void sieve(){
    int sv,i,j;
    sv=sqrt(SIZE-1);
    flag[0]=1;flag[1]=0;
    for(i=4;i<SIZE;i+=2){
        flag[i]=1;
    }
    for(i=3;i<=sv;i++){
        if(!flag[i]){
            for(j=i*i;j<SIZE;j+=(2*i) )
                flag[j]=1;
        }
    }
}

void primesisolated(){
    int i;
    for(i=1,p=0;i<SIZE;i++){
        if(!flag[i]){
            isolatedprimes[p]=i;
            p++;
        }
    }
}
