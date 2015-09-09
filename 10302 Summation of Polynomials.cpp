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

string multiply(string a,string b);
string to_string(ll x);
int main(){
    ll i,num;
    string ans;
    while(sf("%lld",&num)!=EOF){
        i=num*(num+1)/2;
        ans=to_string(i);
        if(ans=="0")
            cout<<"0"<<endl;
        else
            cout<<multiply(ans,ans)<<endl;
    }
    return 0;
}

string multiply(string a,string b){
    string ans="";
    int carry,i,j,k,temp,m;
    int l1=a.size()-1;
    int l2=b.size()-1;
    for(i=0;i<l2;i++)
        a+='0';
    carry=0;
    for(j=l2,i=l1;j>=0;j--){
        if(j==l2)
            i=l1;
        else
            i=0;
        while( i>=0){
            temp=(a[i]-'0')*(b[j]-'0')+carry;
            for(k=j-1,m=i+1;k>=0;k--,m++){
                temp+=(b[k]-'0')*(a[m]-'0');
            }
            carry=temp/10;
            temp%=10;
            ans+=temp+'0';
            i--;
        }
    }
    if(carry)
        ans+=carry+'0';
    reverse(ans.begin(),ans.end());
    return ans;
}

string to_string(ll x){
    string a="";
    ll rem;
    int i,j;
    while(x>0){
        rem=x%10;
        a+=(rem +48);
        x/=10;
    }
    i=0;j=a.length()-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;j--;
    }
    return a;
}
