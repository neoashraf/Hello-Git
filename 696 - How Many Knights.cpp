
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
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define REPR(i,a,b) for(int i=b-1; i>=a; i--)
#define mp(a,b) make_pair(a,b)
#define fs first
#define sc second
#define unq(vec) stable_sort(vec.begin(),vec.end());\
                 vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));

#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define digit(c) (c - '0')
#define CONST 141.421356237f

using namespace std;

typedef long long ll;
typedef double dd;

int gcd(int a, int b) { return (b != 0 ? gcd(b, a%b) : a);}
int lcm(int a, int b) { return (a / gcd(a, b) * b);}

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,r,c,ans,i;
    while(sf("%d %d",&r,&c)==2){
        if(r==0 && c==0)
            break;
        if(r == 1)
			ans = c;
		else if(c == 1)
			ans = r;
		else if(c == 2)
		{
			ans = (r / 4) * 4;
			if(r % 4 == 1)
				ans += 2;
			else if(r % 4 > 1)
				ans += 4;
		}
		else if(r == 2)
		{
			ans = (c / 4) * 4;
			if(c % 4 == 1)
				ans += 2;
			else if(c % 4 > 1)
				ans += 4;
		}
		else{
            ans=(r*c)+1;
            ans/=2;
		}
		pf("%d knights may be placed on a %d row %d column board.\n",ans,r,c);
    }
    return 0;
}
