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

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,n,store[506],i,x,y,xxx,pre,current,j;
    sf("%d",&tc);
    while(tc--){
        sf("%d",&n);
        for(i=0;i<n;i++){
            sf("%d",&store[i]);
        }
        x=*max_element(store,store+n);
        y=*min_element(store,store+n);
        pre=0;current=0;
        for(i=0;i<n;i++){
            pre+=abs(y-store[i]);
        }
        xxx=1;
        for(j=y+1;j<=x;j++){
            current=0;
            for(i=0;i<n;i++){
                current+=abs(j-store[i]);
            }
            if(current>pre){
                xxx=0;
                cout<<pre<<endl;
                break;
            }
            else{
                pre=current;
            }
        }
        if(xxx)
            cout<<current<<endl;
    }
    return 0;
}
