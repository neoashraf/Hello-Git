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
    int n,value[13],each,amount,people,j=0;
    string name[13],giver,receiver;
    while(sf("%d",&n)!=EOF){
        if(j>0){
            pf("\n");
        }
        j++;
        REP(i,0,n){
            value[i]=0;
            cin>>name[i];
        }
        REP(i,0,n){
            cin>>giver;
            sf("%d %d",&amount,&people);
                REP(i,0,n){
                    if(giver.compare(name[i])==0){
                        if(amount && people){
                            value[i]=value[i]-amount+(amount%people);
                            break;
                        }
                    }
                }
            REP(i,0,people){
                cin>>receiver;
                    if(amount && people){
                        each=amount/people;
                        REP(i,0,n){
                        if(receiver.compare(name[i])==0){
                            value[i]+=each;
                            break;
                        }
                    }
                }
            }
        }
        REP(i,0,n){
            cout<<name[i];
            pf(" %d\n",value[i]);
        }
    }
    return 0;
}
