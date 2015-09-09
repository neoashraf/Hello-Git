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
#define SIZE 1000000
#define unq(vec) stable_sort(vec.begin(),vec.end());\
                 vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));

using namespace std;

typedef long long ll;
typedef double dd;

bool  flag[SIZE+5];
int sieve();
char* strrev( char* s );

int main(){
    char buffer[256];
    sieve();
    int x,y;
    while(sf("%s",buffer)!=EOF){
        x = atoi (buffer);
        strrev(buffer);
        y=atoi(buffer);
        if(!flag[x] && x==y)
            break;
        pf("%d\n",2*x);
    }
    pf("%d\n",2*x);
    return 0;
}

int sieve(){
    int sv,i,j;
    sv=sqrt(SIZE);
    flag[0]=1;flag[1]=0;
    for(i=4;i<=SIZE;i+=2){
        flag[i]=1;
    }
    for(i=3;i<=sv;i++){
        if(!flag[i]){
            for(j=i*i;j<=SIZE;j+=(2*i) )
                flag[j]=1;
        }
    }
}



char* strrev( char* s )
  {
  char  c;
  char* s0 = s - 1;
  char* s1 = s;

  /* Find the end of the string */
  while (*s1) ++s1;

  /* Reverse it */
  while (s1-- > ++s0)
    {
    c   = *s0;
    *s0 = *s1;
    *s1 =  c;
    }

  return s;
  }
