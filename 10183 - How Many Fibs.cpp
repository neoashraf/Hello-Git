////#include <iostream>
////#include <cstdio>
////#include<algorithm>
////#include<string>
////using namespace std;
////struct pp{
////        string x;
////        int b;
////    }p[10];
////bool compare(pp a,pp b){
////    return a.x<b.x;
////}
////int main(){
////    int i,j;
////    string xmas;
////    i=0;
////    while(i<10){
////        cin>>p[i].x;
////        p[i].b=p[i].x.length();
////        i++;
////    }
////    //sort(p,p+10,compare);
////    cin>>xmas;
////    i=0;
////    int xl=xmas.length();
////    while(i<10){
////        if(xl==p[i].b){
////            if(xmas>p[i].x)
////                cout<<"m1m"<<endl;
////        }
////        else if(xl>p[i].b){
////            cout<<"m1m"<<endl;
////        }
////        i++;
////    }
////    return 0;
////}




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
struct pp{
    string x;
    int l;
}p[480];
string lw,up;
int cnt;
void adder(int  a, int  b);
int binarysearch(string xx);
int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i;
    p[0].x="1";
    p[0].l=1;
    p[1].x="2";
    p[1].l=1;
    p[2].x="3";
    p[2].l=1;
    for(i=3;i<=478;i++){
        adder(i-2,i-1);
    }
    while(cin>>lw>>up){
        if(lw=="0" && up=="0")
            break;
        cnt=1;
        int s =binarysearch(up);
        cnt=2;
        int c=binarysearch(lw);
            cout<<s-c+1<<endl;
    }
    return 0;
}

void adder(int a, int b){
    int i,j,ts,zero=0;
    int carry=0;
    int l1=p[a].l-1;
    int l2=p[b].l-1;
    for(i=l1,j=l2;i>=0||j>=0;i--,j--){
        if(i<0)
            ts=carry+p[b].x[j]-'0';
        else if(j<0)
            ts=carry+p[a].x[i]-'0';
        else
            ts=carry+(p[a].x[i]-'0')+(p[b].x[j]-'0');
        carry=ts/10;
        ts%=10;
        p[a+2].x+=ts+'0';
    }
    if(carry)
        p[a+2].x+=carry+'0';
    reverse(p[a+2].x.begin(),p[a+2].x.end());
    p[a+2].l=p[a+2].x.length();
}


int binarysearch(string xx){
    int li=0,ui=478,mid,le=xx.length();
    while(li<=ui){
        mid=(li+ui)/2;
        if(xx==p[mid].x){
            return mid;
        }
        else if(le<=p[mid].l){
            if(le==p[mid].l){
                if(xx<p[mid].x)
                    ui=mid-1;
                else
                     li=mid+1;
            }
            else
                ui=mid-1;
        }
        else if(le>p[mid].l)
            li=mid+1;
    }
    if(cnt==1)
        return ui;
    else if(cnt==2)
        return ui+1;
}
