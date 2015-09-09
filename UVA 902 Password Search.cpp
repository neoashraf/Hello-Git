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
    int n,l,i,j,m,tmp,note;
    string x,temp;
    vector <string> xs;
    vector<string>::iterator it;
    while(sf("%d",&n)!=EOF){
        cin>>x;
        l=x.length();
        for(i=0;i<=l-n;i++){
            temp=x.substr(i,n);
            //cout<<temp<<"   ll   "<<endl;
            xs.pb(temp);
        }
        sort(xs.begin(),xs.end());
//        for(it=xs.begin();it!=xs.end();++it)
//            cout<<*it<<endl;
        l=xs.size();
        m=-1;
        i=0;
        while(i<l-1){
            j=i+1;tmp=1;
            while(xs[j]==xs[i]){
                tmp++;
                j++;
                if(j==l)
                    break;
            }
            if(tmp>m){
                m=tmp;
                note=i;
            }
            i=j;
        }
        cout<<xs[note]<<endl;
        xs.erase(xs.begin(),xs.end());
    }
    return 0;
}




//3 baababacb
//aba
//1 aaaaaaaaaaaaaaaaaaaaaaa
//a
//2 asd
//a
//3 asdf
//a
//3 ababadfgghgsdfwerwnmafwerwrerw
//a





