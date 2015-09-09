////This is </the_brainFuck>
//#include <cstring>
//#include<string>
//#include<sstream>
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <memory.h>
//#include <cassert>
////#include<bits/stdc++.h>
//#define sz 2000
//#define eps 1e-9
//#define mod  1000000007
//#define sf scanf
//#define pf printf
//#define mem(a,b) memset(a,b,sizeof(a))
//#define pb push_back
//#define all(a) (a.begin(),a.end())
//#define REP(i,a,b) for(int i=a; i<b; i++)
//#define REPR(i,a,b) for(int i=b-1; i>=a; i--)
//#define mp(a,b) make_pair(a,b)
//#define fs first
//#define sc second
//#define unq(vec) stable_sort(vec.begin(),vec.end());\
//                 vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));
//
//using namespace std;
//
//typedef long long ll;
//typedef double dd;
//
//char in[82],period[82],temp[82],tp[82];
//int main()
//{
//    //freopen("input.txt","r",stdin);
//    //freopen("output.txt","w",stdout);
//    int tc,ncase=0,i,si,sl,l,j,g,gotit,bal;
//    sf("%d",&tc);
//    while(tc--){
//        sf("%s",in);
//        sl=strlen(in);
//        period[0]=in[0];
//        period[1]='\0';
//        si=1;g=0;
//        if(ncase>0)
//            cout<<endl;
//        ++ncase;
//        gotit=0;
//        while(si<sl){
//            l=strlen(period);
//            for(j=0,i=si+j;j<l;j++,i++){
//                temp[j]=in[i];
//                if(i>sl){
//                    cout<<sl<<endl;
//                    gotit=1;
//                    break;
//                }
//            }
//            temp[j]='\0';
//            if(gotit)
//                break;
//            if(!strcmp(temp,period)){
//                si+=(l-1);
//                g++;
//            }
//            else{
//                bal=1;
//                strcpy(tp,period);
//                while(bal<=g){
//                    strcat(period,tp);
//                    bal++;
//                }
//                l=strlen(period);
//                period[l]=in[si];
//                period[l+1]='\0';
//            }
//            si++;
//        }
//        if(!gotit){
//            l=strlen(period);
//            pf("%d\n",l);
//        }
//    }
//    return 0;
//}


//Using string

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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,ncase=0,i,si,sl,l,j,g,gotit,bal;
    string in,temp,period,tp;
    sf("%d",&tc);
    while(tc--){
        cin>>in;
        sl=in.length();
        temp="";period="";tp="";
        period=in[0];
        si=1;g=0;
        if(ncase>0)
            cout<<endl;
        ++ncase;
        gotit=0;
        while(si<sl){
            l=period.length();
            for(j=0,i=si+j;j<l;j++,i++){
                temp+=in[i];
                //cout<<temp<<endl;
                if(i>sl){
                    cout<<sl<<endl;
                    gotit=1;
                    break;
                }
            }
            if(gotit)
                break;
            if(temp.compare(period)==0 ){
                si+=(l-1);
                g++;
            }
            else{
                bal=1;
                tp.assign(period);
                //cout<<tp<<endl;
                while(bal<=g){
                    period+=tp;
                    bal++;
                }
                period+=in[si];
                //cout<<period<<endl;
            }
            si++;
            temp="";

        }
        if(!gotit){
            l=period.length();
            pf("%d\n",l);
        }
    }
    return 0;
}
