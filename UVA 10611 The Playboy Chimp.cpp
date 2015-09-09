
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
int lchims[50005],n;
int binarysearch(int x){
    int li=0,ui=n-1,mid;
    while(li<=ui){
        mid=(li+ui)/2;
        if(x==lchims[mid]){
            return mid;
        }
        else if(x<lchims[mid]){
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
    int q,h,x,i;
    sf("%d",&n);
    i=0;
    while(i<n){
        sf("%d",&lchims[i]);
        i++;
    }
    sf("%d",&q);
    while(q--){
        sf("%d",&h);
        x=binarysearch(h);
        i=x;
        while(lchims[i]==h){
            i--;
        }
        if(i<=-1)
            pf("X ");
        else
            pf("%d ",lchims[i]);
        i=x;
        while(i<n){
            if(lchims[i]>h){
                break;
            }
            i++;
        }
        if(i>=n)
            pf("X\n");
        else
            pf("%d\n",lchims[i]);
    }
    return 0;
}
