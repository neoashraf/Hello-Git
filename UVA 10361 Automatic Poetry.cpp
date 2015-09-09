//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int main(){
//    int n;
//    string l1,l2;
//    string s2,s3,s4,s5;
//    int pos1,pos2,pos3,pos4;
//
//    cin>>n;
//    getline(cin,l1);
//
//    for(int caso=1;caso<=n;caso++){
//        getline(cin,l1);
//        getline(cin,l2);
//
//        pos1=l1.find("<");
//        pos2=l1.find(">");
//        pos3=l1.find("<",pos1+1);
//        pos4=l1.find(">",pos2+1);
//
//        s2=l1.substr(pos1+1,pos2-pos1-1);
//        s3=l1.substr(pos2+1,pos3-pos2-1);
//        s4=l1.substr(pos3+1,pos4-pos3-1);
//        s5=l1.substr(pos4+1,l1.size()-pos4-1);
//
//        l1.erase(pos1,1);
//        l1.erase(pos2-1,1);
//        l1.erase(pos3-2,1);
//        l1.erase(pos4-3,1);
//
//        cout<<l1<<endl;
//
//        pos1=l2.find("...");
//        l2.erase(pos1,3);
//        l2.insert(pos1,s4+s3+s2+s5);
//
//        cout<<l2<<endl;
//    }
//
//    return 0;
//}

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
    int n=3,l2;
    char ch;
    string in1,in2,s2,s3,s4,s5;
    cin>>n;
    getline(cin,in1);
    for(int caso=1;caso<=n;caso++){
        getline(cin,in1);
        getline(cin,in2);
        s2="";s3="";s4="";s5="";
        for(int i=0;in1[i];i++){
            if(in1[i]=='<'){
                in1.erase (in1.begin()+i);
                while(in1[i]!='>'){
                    s2+=in1[i];
                    i++;
                }
                in1.erase (in1.begin()+i);
                while(in1[i]!='<'){
                    s3+=in1[i];
                    i++;
                }
                in1.erase (in1.begin()+i);
                while(in1[i]!='>'){
                    s4+=in1[i];
                    i++;
                }
                in1.erase (in1.begin()+i);
                while(in1[i]){
                    s5+=in1[i];
                    i++;
                }
            }
        }
        l2=in2.length();
        in2.erase (l2-3,3);
        cout<<in1<<endl;
        cout<<in2<<s4<<s3<<s2<<s5<<endl;
    }
    return 0;
}
