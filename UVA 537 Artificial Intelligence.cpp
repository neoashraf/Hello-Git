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
#define dig(c) (c-'0')
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
    int tc,ncase=0,i,c,b,cnt,mis;
    //char x[100];
    string x;
    dd lmop,lmou,lmoi,y,ff,ans;
    sf("%d",&tc);
    getchar();
    while(tc--){
        getline(cin,x);
        //gets(x);
        c=0;
        cnt=0;
        lmop=0;
        lmoi=0;
        lmou=0;
        for(i=0;x[i];i++){
            if(x[i]=='P' && x[i+1]=='='){
                c+=1;
                i+=2;
                cnt++;
                mis=0;
                if(x[i]=='-'){
                    i++;
                    mis=1;
                }
                while(x[i]<='9'){
                    if(x[i]=='.'){
                        y=1;
                        i++;
                        while(x[i]<='9'){
                            y=y*10.0;
                            ff=(x[i]-'0')/y;
                            lmop+=ff;
                            i++;
                        }
                    }
                    if(x[i]>'9')
                        break;
                    b=x[i]-'0';
                    lmop=(lmop*10)+b;
                    i++;
                }
                if(x[i]=='m')
                    lmop*=(1e-3);
                else if(x[i]=='k')
                    lmop*=(1e3);
                else if(x[i]=='M')
                    lmop*=(1e6);
                if(mis)
                    lmop*=(-1);
            }
            else if(x[i]=='U' && x[i+1]=='='){
                c+=2;
                i+=2;
                cnt++;
                mis=0;
                if(x[i]=='-'){
                    i++;
                    mis=1;
                }
                while(x[i]<='9'){
                    if(x[i]=='.'){
                        y=1;
                        i++;
                        while(x[i]<='9'){
                            y=y*10.0;
                            ff=(x[i]-'0')/y;
                            lmou+=ff;
                            i++;
                        }
                    }
                    if(x[i]>'9')
                        break;
                    b=x[i]-'0';
                    lmou=(lmou*10)+b;
                    i++;
                }
                if(x[i]=='m')
                    lmou*=(1e-3);
                else if(x[i]=='k')
                    lmou*=(1e3);
                else if(x[i]=='M')
                    lmou*=(1e6);
                if(mis)
                    lmou*=(-1);
            }
            else if(x[i]=='I' && x[i+1]=='='){
                c+=3;
                i+=2;
                cnt++;
                mis=0;
                if(x[i]=='-'){
                    i++;
                    mis=1;
                }
                while(x[i]<='9'){
                    if(x[i]=='.'){
                        y=1;
                        i++;
                        while(x[i]<='9'){
                            y=y*10.0;
                            ff=(x[i]-'0')/y;
                            lmoi+=ff;
                            i++;
                        }
                    }
                    if(x[i]>'9')
                        break;
                    b=x[i]-'0';
                    lmoi=(lmoi*10)+b;
                    i++;
                }
                if(x[i]=='m')
                    lmoi*=(1e-3);
                else if(x[i]=='k')
                    lmoi*=(1e3);
                else if(x[i]=='M')
                    lmoi*=(1e6);
                if(mis)
                    lmoi*=(-1);
            }
            if(cnt==2)
                break;
        }
        pf("Problem #%d\n",++ncase);
        if(c==3){
            ans=lmop/lmou;
            pf("I=%.2fA\n",ans);
        }
        else if(c==5){
            ans=lmou*lmoi;
            pf("P=%.2fW\n",ans);
        }
        else if(c==4){
            ans=lmop/lmoi;
            pf("U=%.2fV\n",ans);
        }
        cout<<endl;
    }
    return 0;
}
