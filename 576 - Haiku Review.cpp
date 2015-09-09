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
    int i,j,k,store[5],l;
    string x;
    while(getline(cin,x)){
        if(x=="e/o/i")
        break;
        k=0;l=x.length();
        for(i=0;i<3;i++){
            store[i]=0;
        }
        i=0;
        while(i<=l){
            while(x[i]){
                if(x[i]=='/')
                    break;
                //cout<<x[i];
                j=i;
                while(x[j]=='a'||x[j]=='e'||x[j]=='i'||x[j]=='o'||x[j]=='y'||x[j]=='u')
                    j++;
                if(j!=i){
                    store[k]++;
                    i=j;
                }
                //if(j>i+1)
                else
                    i=j+1;
            }
            k++;
            i++;
        }

        if(store[0]==5&&store[1]==7&&store[2]==5)
            cout<<'Y'<<endl;
        else if(store[0]!=5)
            cout<<1<<endl;
        else if(store[1]!=7)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}

