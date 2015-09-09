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

int in[105];
// Iterative
int binarysearch(int x){
    int li=0,ui=99,mid;
    while(li<=ui){
        mid=(li+ui)/2;
        if(x==in[mid]){
            return mid;
        }
        else if(x<in[mid]){
            ui=mid-1;
        }
        else
            li=mid+1;
    }
    return ui;
}

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    REP(i,0,100){
        in[i]=(i+1)*(i+1)*(i+1);
    }
    dd num,dx;
    int x;
    while(sf("%lf",&num)!=EOF && num){
        x=binarysearch( (int)num ) +1;
        dx=(num-(dd)in[x-1])/(3*x*x);
        pf("%.4f\n",(dd)x+dx);
    }
    return 0;
}
