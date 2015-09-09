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

using namespace std;

string finestx;
int n,tc=1,lines,bal;

int binarysearch(char x);
void printthem();
int  alaign1(int x);
void alaign2(int x,int y);

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    string broken,x,breakthem;
    char c,pre;
    int i,j,indicator,b;
    bool index[30];

    printthem();
    cout<<"| Keyboard | # of printable | Additionally, the following |"<<endl;
    cout<<"|          |      lines     |  letter keys can be broken  |"<<endl;
    printthem();
    while(cin>>broken){
        getline(cin,x);
        if(broken=="finish")
            break;
        lines=0;
        for(i=0;i<26;i++)
            index[i]=false;
        for(i=0;broken[i];i++){
            if(broken[i]<97)
                broken[i]=broken[i]+32;
            index[broken[i]-'a']=true;
        }
        while(getline(cin,x)){
            finestx="";
            for(i=0;x[i];i++){
                if(x[i]>='A' && x[i]<='Z' || x[i]>='a' && x[i]<='z'){
                    if(x[i]>='A' && x[i]<='Z')
                        finestx+=(x[i]+32);
                    else
                        finestx+=x[i];
                }
            }
            sort(&finestx[0],&finestx[finestx.length()]);
            //cout<<finestx<<endl;
            indicator=1;
            n=finestx.length();
            for(i=0;broken[i];i++){
                if(binarysearch(broken[i])!=-1){
                    indicator=0;
                    break;
                }
            }
            if(indicator){
                lines++;
                indicator=1;
                pre=' ';
                for(i=0;finestx[i];i++){
                    if(finestx[i]==pre)
                        continue;
                    if(!index[finestx[i]-'a'])
                        index[finestx[i]-'a']=true;
                    pre=finestx[i];
                }
            }
            if(x=="END")
                break;
        }
        breakthem="";
        for(i=0;i<26;i++){
            if(!index[i]){
                c=i+97;
                breakthem+=c;
            }
        }
        bal=0;
        cout<<'|';
        b=alaign1(tc);
        cout<<tc++;
        alaign2(b,11);
        bal=1;
        b=alaign1(lines);
        cout<<lines;
        alaign2(b,28);
        cout<<' '<<breakthem;
        alaign2(30+breakthem.length(),58);
        cout<<endl;
        printthem();
    }
    return 0;
}

int binarysearch(char x){
    int li=0,ui=n-1,mid;
    while(li<=ui){
        mid=(li+ui)/2;
        if(x==finestx[mid]){
            return mid;
        }
        else if(x<finestx[mid]){
            ui=mid-1;
        }
        else
            li=mid+1;
    }
    return -1;
}

void printthem(){
    int i;
    cout<<'+';
    for(i=1;i<=10;i++)
        cout<<'-';
    cout<<'+';
    for(i=1;i<=16;i++)
        cout<<'-';
    cout<<'+';
    for(i=1;i<=29;i++)
        cout<<'-';
    cout<<'+';
    cout<<endl;
}

int alaign1(int x){
    int i,t,r;
    if(!bal){
        if(x<10){
            t=5;
            r=t+1+1;
        }
        else if(x<100){
            t=4;
            r=t+2+1;
        }
        else {
            t=4;
            r=t+3+1;
        }
    }
    else {
        if(x<10){
            t=8;
            r=11+t+1+1;
        }
        else if(x<100){
            t=7;
            r=11+t+2+1;
        }
        else{
            t=7;
            r=11+t+3+1;
        }
    }
    for(i=1;i<=t;i++)
        cout<<' ';
    return r;
}

void alaign2(int x,int y){
    int i;
    for(i=x;i<y;i++)
        cout<<' ';
    cout<<'|';
}
