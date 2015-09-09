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
    int i,j,k,lim,tc;
    string x[105],store[20]={"Happy" ,"birthday", "to", "you", "Happy" ,"birthday" ,"to", "you" ,"Happy", "birthday", "to", "Rujia" ,"Happy" ,"birthday", "to" ,"you"};
    sf("%d",&tc);
    i=1;
    while(i<=tc){
        cin>>x[i];
        i++;
    }
    if(tc%16)
        lim=tc/16 +1;
    else
        lim=tc/16;
    for(i=1;i<=lim;i++){
        for(j=1;j<=16;j++){
            if((j+16*(i-1))%tc)
                k=(j+16*(i-1) )   %tc ;
            else
                k=tc;
            cout<<x[k]<<": "<<store[j-1]<<endl;
        }
    }
    return 0;
}

//16
//a
//s
//d
//f
//g
//h
//j
//k
//l
//l
//a
//d
//f
//g
//h
//j
//df
//fg
//sd
//sd
