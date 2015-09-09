
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
bool keno[5005];

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,keeptrack[5005],i,j,k,l,storenum[5],n,ans;
    keeptrack[1]=1;
    keno[1]=1;
    keeptrack[2]=2;
    keno[2]=1;
    for(i=3;i<=5003;i++){
        n=i;j=0;
        while(n){
            storenum[j++]=n%10;
            n/=10;
        }
        b=1;
        for(k=0;k<j;k++){
            for(l=k+1;l<j;l++){
                if(storenum[k]==storenum[l]){
                    b=0;
                    break;
                }
            }
            if(!b)
                break;
        }
        if(k==j){
                keeptrack[i]=keeptrack[i-1]+1;
                keno[i]=1;
        }
        else
            keeptrack[i]=keeptrack[i-1];
    }
    while(sf("%d %d",&a,&b)!=EOF){
        ans=keeptrack[b]-keeptrack[a];
        if(keno[a] && keno[b])
           ans+=1;
        else if(keno[a]&&!keno[b])
            ans+=1;
        pf("%d\n",ans);
    }
    return 0;
}
