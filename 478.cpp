
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

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,b,point;
    char ch;
    dd x,y,xx,yy;
    struct rec{
        char indicator;
        dd a,b,c,d,e,f;
    }p[15];
    i=0;
    while(1){
        ch=getchar();
        if(ch=='r'){
            p[i].indicator=ch;
            sf("%lf %lf %lf %lf",&p[i].a,&p[i].b,&p[i].c,&p[i].d);
            if(p[i].a>p[i].c)
                swap(p[i].a,p[i].c);
            if(p[i].b>p[i].d)
                swap(p[i].b,p[i].d);
            ch=getchar();
        }
        else if(ch=='c'){
            p[i].indicator=ch;
            sf("%lf %lf %lf",&p[i].a,&p[i].b,&p[i].c);
            ch=getchar();
        }
        else if(ch=='t'){
            p[i].indicator=ch;
            sf("%lf %lf %lf %lf %lf %lf",&p[i].a,&p[i].b,&p[i].c,&p[i].d,&p[i].e,&p[i].f);
            ch=getchar();
        }
        else if(ch=='*')
            break;
        i++;
    }
    point=1;
    while(sf("%lf %lf",&x,&y)){
        if(x==9999.9 && y==9999.9)
            break;
        j=0;b=0;
        while(j<i){
            if(p[j].indicator=='r'){
                if(x>p[j].a&&x<p[j].c && y>p[j].b&&y<p[j].d){
                    b=1;
                    pf("Point %d is contained in figure %d\n",point,j+1);
                }
            }
            else if(p[j].indicator=='c'){
                xx=abs(x-p[j].a);
                yy=abs(y-p[j].b);
                if(sqrt(xx*xx +yy*yy)<p[j].c){
                    b=1;
                    pf("Point %d is contained in figure %d\n",point,j+1);
                }
            }
            else if(p[j].indicator=='t'){
//                xx=(p[j].a*p[j].d-p[j].c*p[j].b) + (p[j].c*p[j].f - p[j].d*p[j].e) + (p[j].e*p[j].b -p[j].a*p[j].f);
//                xx/=2.0;
//                yy=(p[j].a*p[j].d-p[j].c*p[j].b) + (p[j].c*p[j].f - p[j].d*p[j].e)+  (p[j].e*y-p[j].f*x) + (x*p[j].b - p[j].a*y);
//                yy/=2.0;
                if(      ( (x-p[j].a)/(y-p[j].b)!=(p[j].a-p[j].c)/(p[j].b-p[j].d) )
                   &&( (x-p[j].a)/(y-p[j].b)!=(p[j].a-p[j].e)/(p[j].b-p[j].f)  )
                    &&( (x-p[j].c)/(y-p[j].d)!=(p[j].c-p[j].e)/(p[j].d-p[j].f))   ){

                    xx=fabs((p[j].a*p[j].d-p[j].c*p[j].b) + (p[j].c*p[j].f - p[j].d*p[j].e) + (p[j].e*p[j].b -p[j].a*p[j].f) );
                    xx/=2.0;

                    yy=fabs( (  (x*p[j].b-y*p[j].a) +(p[j].a*p[j].d-p[j].c*p[j].b) + (p[j].c*y -p[j].d*x)  )/2.00 );
                    yy+=fabs( ( (x*p[j].b-y*p[j].a) +(p[j].a*p[j].f-p[j].b*p[j].e) + (p[j].e*y -p[j].f*x)  )/2.00);
                    yy+= fabs(( (x*p[j].d-y*p[j].c) +(p[j].c*p[j].f-p[j].d*p[j].e) + (p[j].e*y -p[j].f*x) )/2.00);

                    if(fabs(xx - yy)<=eps ){
                        b=1;
                        pf("Point %d is contained in figure %d\n",point,j+1);
                    }

                }

            }
            j++;
        }
        if(!b){
            pf("Point %d is not contained in any figure\n",point);
        }
        point++;
    }
    return 0;
}
