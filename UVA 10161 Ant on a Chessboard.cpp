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
#define SIZE 100
#define sf scanf
#define pf printf
#define REP(i,a,b) for(int i=a; i<b; i++)

using namespace std;

typedef long long ll;
typedef double dd;

int main(int argc, const char **argv)
{
    ll loc,mid,loc1,loc2,mid1,mid2,s;
    dd x;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);;
    while(sf("%lld",&s)!=EOF && s){
        x=(-1.0+sqrt(1.0+4.0*(dd)(s-1) ))/2.0;
        loc1=floor(x);
        loc2=ceil(x);
        mid1=(loc1*loc1)+loc1+1;
        mid2=(loc2*loc2)+loc2+1;
        if(abs(mid1-s)<=loc1){
            mid=mid1;
            loc=loc1+1;
        }
        else{
            mid=mid2;
            loc=loc2+1;
        }
        if(loc%2){
            if(s>=mid)  pf("%lld %lld\n",loc-(s-mid),loc );
            else pf("%lld %lld\n",loc,loc-(mid-s));
        }
        else{
            if(s>=mid) pf("%lld %lld\n",loc,loc-(s-mid));
            else pf("%lld %lld\n",loc-(mid-s),loc);
        }
    }
    return 0;
}
