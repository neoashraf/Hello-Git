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
    int a1,b1,c1,a2,b2,c2;
    dd x,y,d;
    while(sf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2)!=EOF){
        if(a1==0&&b1==0&&c1==0&&a2==0&&b2==0&&c2==0)
            break;
        d=(a1*b2-a2*b1);
        if(d==0)
            pf("No fixed point exists.\n");
        else{
            c1*=(-1);
            c2*=(-1);
            x=b1*c2-b2*c1;
            if(x)
                x/=d;
            y=a1*c2-a2*c1;
            if(y)
                y/=(-d);
            pf("The fixed point is at %.2f %.2f.\n",x,y);
        }
    }
    return 0;
}


//ax+by+c=0
//d=a1b2-a2b1
//x=b1c2-b2c1/d
//-y=a1c2-a2c1/d
