
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
struct pp{
    string x;
    int l;
}p[10004];
bool compare(pp a,pp b){
        return a.x<b.x;
}
int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,n,i,l,b,j,k;
    string temp;
    sf("%d",&tc);
    while(tc--){
        sf("%d",&n);
        i=0;
        while(i<n){
            cin>>p[i].x;
            p[i].l=p[i].x.length();
            i++;
        }
        sort(p,p+n,compare);
        i=0;b=1;
        while(i<n){
            for(j=i+1;j<n;j++){
                if(p[i].l<p[j].l){
                    temp="";
                    for(k=0;k<p[i].l;k++)
                        temp+=p[j].x[k];
                    //temp+='\0';
                    //cout<<temp<<'m'<<endl;
                    if(temp==p[i].x){
                        cout<<"NO"<<endl;
                        b=0;
                        break;
                    }
                }
            }
            if(!b)
                break;
            i++;
        }
        if(b)
        cout<<"YES"<<endl;
    }
    return 0;
}
