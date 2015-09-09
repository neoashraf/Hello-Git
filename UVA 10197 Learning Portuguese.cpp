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
    int i,j,o=243,l,tc=0;
    string x,a,b,root;
    while(cin>>a>>b){
        if(tc)
                pf("\n");
        tc++;
        cout<<a<<" (to "<<b<<')'<<endl;
        x="";
        l=a.length();
        x+=a[l-2];
        x+=a[l-1];
        root="";
        for(i=0;i<=l-3;i++)
            root+=a[i];
        if(x=="ar"){
            for(i=1;i<=6;i++){
                if(i==1){
                    cout<<"eu";
                    for(int j=3;j<=10;j++)
                        cout<<' ';
                    cout<<root<<'o'<<endl;
                }
                else if(i==2){
                    cout<<"tu";
                    for(int j=3;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"as"<<endl;
                }
                else if(i==3){
                cout<<"ele/ela";
                    for(int j=8;j<=10;j++)
                        cout<<' ';
                    cout<<root<<'a'<<endl;
                }
                else if(i==4){
                cout<<'n';
                pf("%cs",o);
                    for(int j=4;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"amos"<<endl;
                }
                else if(i==5){
                    cout<<'v';
                    pf("%cs",o);
                    for(int j=4;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"ais"<<endl;
                }
                else if(i==6){
                    cout<<"eles/elas";
                    cout<<' ';
                    cout<<root<<"am"<<endl;
                }
            }
        }
        else if(x=="er"){
            for(i=1;i<=6;i++){
                if(i==1){
                    cout<<"eu";
                    for(int j=3;j<=10;j++)
                        cout<<' ';
                    cout<<root<<'o'<<endl;
                }
                else if(i==2){
                    cout<<"tu";
                    for(int j=3;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"es"<<endl;
                }
                else if(i==3){
                cout<<"ele/ela";
                    for(int j=8;j<=10;j++)
                        cout<<' ';
                    cout<<root<<'e'<<endl;
                }
                else if(i==4){
                cout<<'n';
                pf("%cs",o);
                    for(int j=4;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"emos"<<endl;
                }
                else if(i==5){
                    cout<<'v';
                    pf("%cs",o);
                    for(int j=4;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"eis"<<endl;
                }
                else if(i==6){
                    cout<<"eles/elas";
                    cout<<' ';
                    cout<<root<<"em"<<endl;
                }
            }
        }
        else if(x=="ir" ){
            for(i=1;i<=6;i++){
                if(i==1){
                    cout<<"eu";
                    for(int j=3;j<=10;j++)
                        cout<<' ';
                    cout<<root<<'o'<<endl;
                }
                else if(i==2){
                    cout<<"tu";
                    for(int j=3;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"es"<<endl;
                }
                else if(i==3){
                cout<<"ele/ela";
                    for(int j=8;j<=10;j++)
                        cout<<' ';
                    cout<<root<<'e'<<endl;
                }
                else if(i==4){
                cout<<'n';
                pf("%cs",o);
                    for(int j=4;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"imos"<<endl;
                }
                else if(i==5){
                    cout<<'v';
                    pf("%cs",o);
                    for(int j=4;j<=10;j++)
                        cout<<' ';
                    cout<<root<<"is"<<endl;
                }
                else if(i==6){
                    cout<<"eles/elas";
                    cout<<' ';
                    cout<<root<<"em"<<endl;
                }
            }
        }
        else
            cout<<"Unknown conjugation"<<endl;
    }
    return 0;
}
