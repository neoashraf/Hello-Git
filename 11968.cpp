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
int b;
int binarysearch(double x,vector<int>input);

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,c,d,tc,ncase=0,i,p,cc,x;
    long long sum;
    vector<int >in,cake,drink;
    double avg;
    //vector<int>::const_iterator it;
    sf("%d",&tc);
    while(tc--){
        sf("%d %d %d",&n,&c,&d);
        sum=0;
        for(i=0;i<n;i++){
            sf("%d",&x);
            sum+=x;
            in.pb(x);
        }
        avg=(double)sum/(double)n;
        for(i=0;i<c;i++)
            cake.pb(in[i]);
         i=c;
         cc=c+d;
        while(i<cc){
            drink.pb(in[i]);
            i++;
        }
        sort(cake.begin(),cake.end());
        sort(drink.begin(),drink.end());
        pf("Case #%d: ",++ncase);
        p=binarysearch(avg,cake);
        if(!b){
            if(p==-1)
                p++;
            else if(p==c-1)
                p=p;
            else if( (avg-cake[p]) >(cake[p+1]-avg) )
                p++;
            else
                p=p;
        }
        pf("%d ",cake[p]);
        p=binarysearch(avg,drink);
        if(!b){
            if(p==-1)
                p++;
            else if(p==d-1)
                p=p;
            else if( (avg-drink[p])>(drink[p+1]-avg) )
                p++;
            else
                p=p;
        }
        pf("%d\n",drink[p]);
        cake.clear();
        drink.clear();
        in.clear();
    }
    return 0;
}

int binarysearch(double x,vector<int >input){
    int li=0,ui=input.size()-1,mid;
    while(li<=ui){
        mid=(li+ui)/2;
        if(x==input[mid]){
            b=1;
            return mid;
        }
        else if(x<input[mid]){
            ui=mid-1;
        }
        else
            li=mid+1;
    }
    b=0;
    return ui;
}
