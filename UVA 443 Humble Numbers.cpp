
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
#define sz 2e9
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
    int n,store[5844],i=1,p2=0,p3=0,p5=0,p7=0,r,rr;
    store[0]=1;
    while(i<5842){
        store[i]=min(  min(store[p2]*2,store[p3]*3)  ,  min(store[p5]*5,store[p7]*7)   );
        if(store[i]==store[p2]*2)  p2++;
        if(store[i]==store[p3]*3)  p3++;
        if(store[i]==store[p5]*5)  p5++;
        if(store[i]==store[p7]*7)  p7++;
        i++;
    }
    while(sf("%d",&n)!=EOF && n){
        r=n%10;
        rr=(n/10)%10;
        if(rr==1){
            pf("The %dth humble number is %d.\n",n,store[n-1]);
        }
        else{
            if(r==1)
            pf("The %dst humble number is %d.\n",n,store[n-1]);
            else if(r==2)
                pf("The %dnd humble number is %d.\n",n,store[n-1]);
            else if(r==3)
                pf("The %drd humble number is %d.\n",n,store[n-1]);
            else
                pf("The %dth humble number is %d.\n",n,store[n-1]);
        }
    }
    return 0;
}
