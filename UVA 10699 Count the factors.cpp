//This is </the_brainFuck>
#include <cstring>
#include<string>
#include<sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
//#include<bits/stdc++.h>
#define SIZE 1000005
#define eps 1e-9
#define mod  1000000007
#define sf scanf
#define pf printf
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define all(a) (a.begin(),a.end())
#define REP(i,a,b) for(int i=a; i<b; i++)
#define REPR(i,a,b) for(int i=b-1; i>=a; i--)
#define mp(a,b) make_pair(a,b)
#define fs first
#define sc second
#define unq(vec) stable_sort(vec.begin(),vec.end());\
                 vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));

using namespace std;

typedef long long ll;
typedef double dd;

int gcd(int a, int b) { return (b != 0 ? gcd(b, a%b) : a);}
int lcm(int a, int b) { return (a / gcd(a, b) * b);}

bool  flag[SIZE];
int isolatedprimes[80000];

void sieve();
void primesisolated();

int main(){
    sieve();
    primesisolated();
    int n,i,j,num;
    while(sf("%d",&n)!=EOF && n){
        if(!flag[n]){
            pf("%d : 1\n",n);
            continue;
        }
        pf("%d : ",n);
        j=0;num=0;
        while(n>1){
            if(!(n%isolatedprimes[j]) ){
               num++;
               while(!(n%isolatedprimes[j]) ){
                    n/=isolatedprimes[j];
                }
            }
            j++;
        }
        pf("%d\n",num);
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
