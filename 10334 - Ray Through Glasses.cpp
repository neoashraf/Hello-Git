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


string adder(string a, string b);

int main(){
    string x[1002];
    int n,i;
    x[0]="1";x[1]="2";
    for(i=2;i<=1001;i++){
        x[i]=adder(x[i-1],x[i-2]);
    }
    while(scanf("%d",&n)!=EOF){
        cout<<x[n]<<endl;
    }
    return 0;
}

string adder(string a, string b){
    int i,j,ts,zero=0;
    string ans="";
    int carry=0;
    int l1=a.size()-1;
    int l2=b.size()-1;
    for(i=l1,j=l2;i>=0||j>=0;i--,j--){
        if(i<0)
            ts=carry+b[j]-'0';
        else if(j<0)
            ts=carry+a[i]-'0';
        else
            ts=carry+(a[i]-'0')+(b[j]-'0');
        carry=ts/10;
        ts%=10;
        ans+=ts+'0';
    }
    if(carry)
        ans+=carry+'0';
    reverse(ans.begin(),ans.end());
    return ans;
}
