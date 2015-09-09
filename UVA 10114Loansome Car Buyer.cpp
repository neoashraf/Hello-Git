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
    int n,m,x,i,ndep;
    dd downpay,loan,r[100],carprice,borrow,monthlypay;
    while(sf("%d %lf %lf %d",&n,&downpay,&loan,&ndep)==4){
        if(n<0){
            break;
        }
        REP(i,0,n)
            r[i]=0;
        carprice=downpay+loan;
        borrow=loan;
        monthlypay=loan/(dd)n;
        while(ndep--){
            sf("%d",&m);
            sf("%lf",&r[m]);
        }
        i=0;
        while(i<=n){
            if(r[i])
                x=i;
            carprice-=(carprice*r[x]);
            if(i>0)
                borrow-=monthlypay;
            if(borrow<carprice){
                if(i!=1){
                    pf("%d months\n",i);
                    break;
                }
                else{
                    pf("%d month\n",i);
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}

