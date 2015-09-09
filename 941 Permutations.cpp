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
ll facts20[20];
void fact(){
    ll i;
    facts20[1]=1;
    //cout<<facts20[1]<<endl;
    for(i=2;i<=19;i++){
        facts20[i]=facts20[i-1]*i;
        //cout<<facts20[i]<<endl;
    }
}
int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll i,j,k,tc,n,l,lim;
    string in,last2,ans;
    fact();
    sf("%lld",&tc);
    while(tc--){
        cin>>in;
        sf("%lld",&n);
        n++;
        l=in.length();
        sort(&in[0],&in[l]);
        lim=l-2;
        l--;
        ans="";
        for(i=0;i<lim;i++){
            if(! (n%facts20[l]) ){
                ans+=in[i+ n/facts20[l]-1];
                cout<<in[i+ n/facts20[l]-1]<<endl;
                in[i+ n/facts20[l]-1]='0';
            }
            else{
                cout<<in[i+ n/facts20[l]]<<endl;
                ans+=in[i+ n/facts20[l]];
                in[i+ n/facts20[l]]='0';
            }
            l--;
        }
        last2="";
        for(j=0;in[j];j++){
            if(in[j]!='0'){
                last2+=in[j];
            }
        }
        if(!(n%2) ){
            reverse(last2.begin(),last2.end());
        }
        cout<<ans<<last2<<endl;
    }
    return 0;
}

