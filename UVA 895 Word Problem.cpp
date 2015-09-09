
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
struct pp{
        string x;
        int y;
    }p[1005];
int gcd(int a, int b) { return (b != 0 ? gcd(b, a%b) : a);}
int lcm(int a, int b) { return (a / gcd(a, b) * b);}

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k,l,n,cnt,fcnt;
    string temp,current;
    i=0;
    while(1){
        cin>>p[i].x;
        p[i].y=p[i].x.length();
        sort(&p[i].x[0],&p[i].x[p[i].y]);
        if(p[i].x=="#")
            break;
        i++;
    }
    getline(cin,temp);
    while(1){
        getline(cin,temp);
        if(temp=="#")
            break;
        current="";
        for(i=0;temp[i];i++){
            if(temp[i]!=' ')
                current+=temp[i];
        }
        n=current.length();
        sort(&current[0],&current[n]);
        i=0;
        j=0;fcnt=0;
        while(p[i].x[0]!='#'){
            cnt=0;
            for(k=0,l=0;p[i].x[k];k++,l++){
                while(p[i].x[k]!=current[l] && l<n){
                    l++;
                }
                if(l<n)
                    cnt++;
            }
            if(cnt==p[i].y)
                fcnt++;
            i++;
        }
        pf("%d\n",fcnt);
    }
    return 0;
}
