
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

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,b,point;
    char ch;
    dd x,y;
    struct rec{
        dd a,b,c,d;
    }p[15];
    i=0;
    while(1){
        ch=getchar();
        if(ch=='r'){
            sf("%lf %lf %lf %lf",&p[i].a,&p[i].b,&p[i].c,&p[i].d);
            if(p[i].a>p[i].c)
                swap(p[i].a,p[i].c);
            if(p[i].b>p[i].d)
                swap(p[i].b,p[i].d);
            ch=getchar();
            i++;
        }
        else if(ch=='*')
            break;
    }
    point=1;
    while(sf("%lf %lf",&x,&y)){
        if(x==9999.9 && y==9999.9)
            break;
        j=0;b=0;
        while(j<i){
            if(x>p[j].a&&x<p[j].c && y>p[j].b&&y<p[j].d){
                b=1;
                pf("Point %d is contained in figure %d\n",point,j+1);
            }
            j++;
        }
        if(!b){
            pf("Point %d is not contained in any figure\n",point);
        }
        point++;
    }
    return 0;
}
