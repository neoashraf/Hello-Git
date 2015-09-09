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

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int lim,n,sliceit[10],i,sq,j,k,csq,a,b;
    string Result;
    vector<string > l2,l4,l6,l8;
    vector<string>::const_iterator it;
    l2.pb("00");
    l2.pb("01");
    l2.pb("81");
    l4.pb("0000");
    l4.pb("0001");
    l6.pb("000000");
    l6.pb("000001");
    l8.pb("00000000");
    l8.pb("00000001");
    for(i=10;i<=9999;i++){
        sq=i*i;
        csq=sq;k=0;
        while(csq){
            sliceit[++k]=csq%10;
            csq/=10;
        }
        if(k%2)
            lim=k/2+1;
        else
            lim=k/2;
        a=0;
        for(j=k;j>lim;j--)
            a=a*10+sliceit[j];
        b=0;
        for(j=lim;j>0;j--)
            b=b*10+sliceit[j];
        if(a+b==i){
            ostringstream convert;   // stream used for the conversion
            convert << sq;      // insert the textual representation of 'Number' in the characters in the stream
            Result = convert.str();
            if(k<=2){
                if(k==2)
                    l2.pb(Result);
                else
                    l2.pb(adder("00",Result) );
            }
            else if(k<=4){
                if(k==4)
                    l4.pb(Result);
                else
                    l4.pb(adder("0000",Result) );
            }
            else if(k<=6){
                if(k==6)
                    l6.pb(Result);
                else
                    l6.pb(adder("000000",Result) );
            }
            else if(k<=8){
                if(k==8)
                    l8.pb(Result);
                else
                    l8.pb(adder("00000000",Result) );
            }
        }
    }
    while(sf("%d",&n)!=EOF){
        if(n==2){
            for(it=l2.begin(); it!=l2.end(); ++it)
                cout<<*it<<endl;
        }
        else if(n==4){
            for(it=l4.begin(); it!=l4.end(); ++it)
                cout<<*it<<endl;
        }
        else if(n==6){
            for(it=l6.begin(); it!=l6.end(); ++it)
                cout<<*it<<endl;
        }
        else if(n==8){
            for(it=l8.begin(); it!=l8.end(); ++it)
                cout<<*it<<endl;
        }
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
