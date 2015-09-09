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
#define sz 2000
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

string fibos[5005];
void adder(int  a, int  b);

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,n;
    fibos[0]="0";
    fibos[1]="1";
    for(i=2;i<=5000;i++){
        adder(i-2,i-1);
    }
    while(sf("%d",&n)!=EOF){
        cout<<"The Fibonacci number for "<<n <<" is "<<fibos[n]<<endl;
        cout<<fibos[n].length()<<endl;
    }
    return 0;
}

void adder(int a, int b){
    int i,j,ts,zero=0;
    int carry=0;
    int l1=fibos[a].size()-1;
    int l2=fibos[b].size()-1;
    for(i=l1,j=l2;i>=0||j>=0;i--,j--){
        if(i<0)
            ts=carry+fibos[b][j]-'0';
        else if(j<0)
            ts=carry+fibos[a][i]-'0';
        else
            ts=carry+(fibos[a][i]-'0')+(fibos[b][j]-'0');
        carry=ts/10;
        ts%=10;
        fibos[a+2]+=ts+'0';
    }
    if(carry)
        fibos[a+2]+=carry+'0';
    reverse(fibos[a+2].begin(),fibos[a+2].end());
}
