
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
#define SIZE 100
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
int n;
string sortedy[SIZE];
int binarysearch(string x);

struct dictionary{
    string x,y;
}p[SIZE];

bool compare(dictionary a,dictionary b){
    return (a.x<b.x);
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i=0,j,r,q,l,lk;
    string str;
    while(cin>>str){
        if(str=="#")
            break;
        p[i].x=str;
        p[i].y="";
        l=str.length();
        for(j=0;j<l;j++){
            p[i].y+=tolower(str[j]);
        }
        sort(&p[i].y[0],&p[i].y[l]);
        i++;
    }
    sort(p,p+i,compare);

    for(j=0;j<i;j++)
        sortedy[j]=p[j].y;
    n=j;
    sort(&sortedy[0],&sortedy[j]);

    for(i=0;i<n;i++){
        lk=binarysearch(p[i].y);
        if(lk==0){
            if(sortedy[lk+1]!=p[i].y )
                cout<<p[i].x<<endl;
        }
        else if(lk==n-1){
            if(sortedy[lk-1]!=p[i].y )
                cout<<p[i].x<<endl;
        }
        else{
            if(sortedy[lk-1]!=p[i].y && sortedy[lk+1]!=p[i].y)
            cout<<p[i].x<<endl;
        }
    }

    return 0;
}

int binarysearch(string x){
    int li=0,ui=n-1,mid;
    while(li<=ui){
        mid=(li+ui)/2;
        if(x==sortedy[mid]){
            return mid;
        }
        else if(x<sortedy[mid]){
            ui=mid-1;
        }
        else
            li=mid+1;
    }
    return -1;
}
