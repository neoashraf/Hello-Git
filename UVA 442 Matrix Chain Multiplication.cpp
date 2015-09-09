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
#define unq(vec) stable_sort(vec.begin(),vec.end());\
                 vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));

using namespace std;

typedef long long ll;
typedef double dd;

struct in{
    char a;
    int r;
    int c;
}p[27];

int n;

bool compare(in x,in y){
    return (x.a<y.a);
}

int binarysearch(char x){
    int li=0,ui=n-1,mid;
    while(li<=ui){
        mid=(li+ui)/2;
        if(x==p[mid].a){
            return mid;
        }
        else if(x<p[mid].a){
            ui=mid-1;
        }
        else
            li=mid+1;
    }
    return -1;
}

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int fr,fc,sr,sc,index,i,mulplctn,spfr,spfc,l,bal=0;
    string ope;
    sf("%d",&n);
    REP(i,0,n){
        getchar();
        sf("%c %d %d",&p[i].a,&p[i].r,&p[i].c);
    }
    sort(p,p+n,compare);
    while(cin>>ope){
        mulplctn=0;
        i=0;
        l=ope.length();
        while(i!=l-1){
            if(ope[i]=='(' &&ope[i+3]==')'){
                if(ope[i+1]!='@'){
                    index=binarysearch(ope[i+1]);
                    if(index!=-1){
                        fr=p[index].r;
                        fc=p[index].c;
                    }
                }
                else{
                    if(ope[i+2]!='@')
                        fc=sc;
                    else{
                        fr=spfr;
                        fc=spfc;
                    }
                }
                if(ope[i+2]!='@'){
                    index=binarysearch(ope[i+2]);
                    if(index!=-1){
                        sr=p[index].r;
                        sc=p[index].c;
                    }
                }
                if(fc!=sr){
                    cout<<"error"<<endl;
                     bal=1;
                    break;
                }
                mulplctn+=(fr*sr*sc);
                ope[i]='@';
                ope.erase (i+1,3);
                if(ope[i-1]=='('&&ope[i+1]=='('){
                    spfr=fr;
                    spfc=sc;
                }
                else if(ope[i+1]==')'){
                    sr=fr;
                }
                l=ope.length();
                i=-1;
//                cout<<ope<<endl;
//                return 0;
            }
            i++;
        }
        if(!bal)
            cout<<mulplctn<<endl;
        bal=0;
    }
//    REP(i,0,n)
//        pf("%c %d %d\n",p[i].a,p[i].r,p[i].c);
    return 0;
}
