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
    string x,lword;
    int l=0,m,i;
    while(cin>>x){
        m=x.length();
        while( m>=1 && ((x[0]<'A' && x[0]!='-' ) || (x[0]<'a' &&x[0]>'Z') ||x[0]>'z') ){
            x.erase(0,1);
            m=x.length();
        }
        while( m>=1 && ( (x[m-1]<'A' && x[m-1]!='-' ) || (x[m-1]<'a' &&x[m-1]>'Z') ||x[m-1]>'z') ){
            x.erase(m-1,1);
            m=x.length();
        }
        if(l<m){
            l=m;
            lword.assign(x);
        }
        if(x.compare("E-N-D")==0)
            break;
    }
    l=lword.length();
    for(i=0;i<l;i++){
        if(lword[i]>='A'&&lword[i]<='Z')
            lword[i]+=32;
    }
    cout<<lword<<endl;
    return 0;
}
