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

int main(){
    char sample[10][20],h[]="\\______/",bottom[10];
    int i,j,l[7],r[7],n,lweight,rweight,rw,lw,one,zero,rem,k,m;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        for(i=0;i<8;i++)
            scanf("%s",sample[i]);
        for(j=0;j<=7;j++){
            bottom[j]=sample[4][j];
        }
        bottom[j]='\0';
        if(!strcmp(bottom,h)){
            rw=1;lw=0;
            for(j=1;j<=6;j++)
                l[j]=sample[3][j];
            for(j=11;j<=16;j++)
                r[j-10]=sample[5][j];
        }
        for(j=10;j<=17;j++){
            bottom[j-10]=sample[4][j];
        }
        bottom[j-10]='\0';
        if(!strcmp(bottom,h)){
            lw=1;rw=0;
            for(j=11;j<=16;j++)
                r[j-10]=sample[3][j];
            for(j=1;j<=6;j++)
                l[j]=sample[5][j];
        }
        for(j=0;j<=7;j++){
            bottom[j]=sample[5][j];
        }
        bottom[j]='\0';
        if(!strcmp(bottom,h)){
            lw=1;rw=1;
            for(j=1;j<=6;j++)
                l[j]=sample[4][j];
            for(j=11;j<=16;j++)
                r[j-10]=sample[4][j];
        }
        one=0;zero=0;rem=0;
        for(i=1;i<=6;i++){
                if(l[i]=='.')
                    continue;
                m=l[i];
            while(m>0){
                rem=m%2;
                if(rem==1)
                    one++;
                else
                    zero++;
                m/=2;
            }
        }
        lweight=(one*500)+(zero*250);
        one=0;zero=0;
        for(i=1;i<=6;i++){
            if(r[i]=='.')
                continue;
            m=r[i];
            while(m>0){
                rem=m%2;
                if(rem==1)
                    one++;
                else
                    zero++;
                m/=2;
            }
        }
        rweight=(one*500)+(zero*250);
        if((rweight>lweight &&rw>lw)||(rweight<lweight &&rw<lw)||(rweight==lweight &&rw==lw)){
            printf("Case %d:\n",k);
            printf("The figure is correct.\n");
        }
        else if(lweight>rweight && lw<=rw ){
            printf("Case %d:\n",k);
            printf("........||.../\\...\n........||../..\\..\n.../\\...||./....\\.\n../..\\..||/");
            for(i=1;i<=6;i++)
                printf("%c",r[i]);
            printf("\\\n./....\\.||\\______/\n/");
            for(i=1;i<=6;i++)
                printf("%c",l[i]);
            printf("\\||........\n\\______/||........\n");
        }
        else if(lweight<rweight && lw>=rw){
            printf("Case %d:\n",k);
            printf(".../\\...||........\n../..\\..||........\n./....\\.||.../\\...\n/");
            for(i=1;i<=6;i++)
                printf("%c",l[i]);
            printf("\\||../..\\..\n\\______/||./....\\.\n........||/");
            for(i=1;i<=6;i++)
                printf("%c",r[i]);
            printf("\\\n\........||\\______/\n");
        }
        else if(lweight==rweight && lw!=rw){
            printf("Case %d:\n",k);
            printf("........||........\n.../\\...||.../\\...\n../..\\..||../..\\..\n./....\\.||./....\\.\n/");
            for(i=1;i<=6;i++)
                printf("%c",l[i]);
            printf("\\||/");
            for(i=1;i<=6;i++)
                printf("%c",r[i]);
            printf("\\\n\\______/||\\______/\n........||........\n");
        }
    }
    return 0;
}

