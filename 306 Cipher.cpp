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
    int  n,nkey=9,i,j,k,keys[204];
    string  y[100000];
    while(sf("%d",& n) && n){
        if(!nkey && n)
            cout<<endl;
        for(i=0;i<n;i++)
            sf("%d",&keys[i]);
        while(sf("%d",&nkey)&&nkey){
            getchar();
            getline(cin,y[0]);
            for(i=y[0].length();i<n;i++)
                y[0]+=' ';
            for(i=1;  ;i++){
                y[i]="";
                for(int oj=0;oj<n;oj++)
                    y[i]+=' ';
                for(j=0;y[i-1][j]!='\0';j++){
                    y[i][keys[j]-1]=y[i-1][j];
                }
               // cout<<y[i]<<'m'<<endl;
                if(y[i]==y[0])
                    break;
            }
            i=nkey%i;
            cout<<y[i]<<endl;
        }
    }
    return 0;
}
