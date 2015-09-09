

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
    int  i,j,k,cnt,bul,b;
    string x,store[8]={"BPFV","CSKGJQXZ","DT","L","MN","R"},non="AEIOUYWH";
    for(i=1;i<10;i++)
        pf(" ");
    pf("NAME");
    for(i=14;i<35;i++)
        pf(" ");
    pf("SOUNDEX CODE\n");
    while( cin>>x){
        for(i=1;i<10;i++)
            pf(" ");
        cout<<x;
        for(i=10+x.length();i<35;i++)
            pf(" ");
        cout<<x[0];
        bul=0;
        for(j=0;j<6;j++){
            for(k=0;store[j][k]!='\0';k++){
                if(x[0]==store[j][k]){
                    bul=j+1;
                    break;
                }
            }
            if(bul)
                break;
        }
        cnt=1;
        i=1;
        while(x[i]){
            for(j=0;non[j]!='\0';j++){
                if(x[i]==non[j]){
                    b=0;
                    bul=-1;
                    break;
                }
            }
            if(!b){
                i++;
                b=1;
                continue;
            }
            for(j=0;j<6;j++){
                for(k=0;store[j][k]!='\0';k++){
                    if(x[i]==store[j][k]){
                        if(j+1==bul){
                            b=0;
                            break;
                        }
                        else{
                            cout<<j+1;
                            bul=j+1;
                            cnt++;
                            break;
                        }
                    }
                }
                if(!b){
                    b=1;
                    break;
                }
            }
            if(cnt==4)
                break;
            i++;
        }
        for(i=cnt+1;i<=4;i++)
            cout<<'0';
        cout<<'\n';
    }
    for(i=1;i<20;i++)
        cout<<' ';
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
