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

int o,t;
int  checkcmnletter(string x,string y);
int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,ii,in1,in2,in3,in4,p,lone,lthree,ltwo,lfour,d,dd,left,tc=0,pk;
    string one,two,three,four,x;
    while(getline(cin,x)){
        if(x=="#")
            break;
        if(tc)
            pf("\n");
        tc++;
        i=0;pk=1;one="";two="",three="",four="";
        while(x[i]){
            int j=i;
            while(x[j]!=' '){
                one+=x[j];
                j++;
            }
            i=j+1;
            while(x[i]==' ')
                i++;
            j=i;
            while(x[j]!=' '){
                two+=x[j];
                j++;
            }
            i=j+1;
            while(x[i]==' ')
                i++;
            j=i;
            while(x[j]!=' '){
                three+=x[j];
                j++;
            }
            i=j+1;
            while(x[i]==' ')
                i++;
            j=i;
            while(x[j]!='\0'){
                four+=x[j];
                j++;
            }
            i=j;
        }
        p=checkcmnletter(one,two);
        in1=o;in2=t;
        if(p==-1){
            pf("Unable to make two crosses\n");
            continue;
        }
        p=checkcmnletter(three,four);
        if(p==-1){
            pf("Unable to make two crosses\n");
            continue;
        }
        in3=o;in4=t;
        lone=one.length();
        lthree=three.length();

        d=in2-in4;
        dd=abs(d);
        if(d>0){
            left=1;
            i=0;
            while(d--){
                for(int j=1;j<=in1;j++)
                    cout<<' ';
                cout<<two[i]<<endl;
                i++;
            }
            d=0;
        }
        else if(d<0){
            left=0;
            d*=-1;
            i=0;
            while(d--){
                for(int j=1;j<=lone;j++)
                    cout<<' ';
                cout<<"   ";
                for(int j=1;j<=in3;j++)
                    cout<<' ';
                cout<<four[i]<<endl;
                i++;
            }
            d=0;
        }
        if(!d){
            if(left){
                i=dd+1;
                ii=1;
            }
            else{
                i=1;
                ii=dd+1;
            }
            while(i<=in2&&ii<=in4){
                for(int j=1;j<=in1;j++)
                    cout<<' ';
                cout<<two[i-1];
                for(int j=in1+2;j<=lone;j++)
                    cout<<' ';
                cout<<"   ";
                for(int j=1;j<=in3;j++)
                    cout<<' ';
                cout<<four[ii-1]<<endl;
                i++;ii++;
            }
        }

        cout<<one<<"   "<<three<<endl;

        ltwo=two.length();
        lfour=four.length();
        for(i=0;i+in2+2<=ltwo;i++){
            for(int j=1;j<=in1;j++)
                cout<<' ';
            cout<<two[i+in2+1];
            if(i+in4+1<lfour){
                for(int j=1;j<=lone-1-in1;j++)
                    cout<<' ';
                cout<<"   ";
                for(int j=1;j<=in3;j++)
                    cout<<' ';
                cout<<four[i+in4+1]<<endl;
            }
            else{
                cout<<endl;
            }
        }
        while(i+in4+1<lfour){
            for(int j=1;j<=lone;j++)
                cout<<' ';
            cout<<"   ";
            for(int j=1;j<=in3;j++)
                cout<<' ';
            cout<<four[i+in4+1]<<endl;
            i++;
        }
    }
    return 0;
}

int  checkcmnletter(string x,string y){
    int i,j,bal=1;
    for(i=0;x[i];i++){
        for(j=0;y[j];j++){
                if(x[i]==y[j]){
                    bal=0;
                    o=i;
                    t=j;
                    break;
                }
        }
        if(!bal)
            break;
    }
    if(bal)
        return -1;
}
