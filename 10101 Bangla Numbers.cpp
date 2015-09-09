//This is the_brainFuck
#include <cstring>
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
#include<string>
using namespace std;

int main() {
    int i,l;
    string a;
    i=1;
    while(cin>>a){
        reverse(a.begin(),a.end());
        l=a.size();
        printf("%4d. ",i);
        bool indicator=0;
        for(int j=l-1;j>=0;j--){
            if(j==l-1&&a[j]=='0')
                    continue;
            if(j==0 ||j==3||j==5||j==7||j==10||j==12){
                if(!(a[j]=='0'&&a[j+1]=='0')){
                    if(l==j+1&&a[j]!='0'){
                        cout<<a[j];
                    }
                    else{
                        if(a[j+1]!='0')
                            cout<<a[j];
                        else if(indicator){
                            cout<<' ';
                            cout<<a[j];
                        }
                        else if(!indicator){
                            cout<<a[j];
                        }
                    }
                    if(j==3||j==10)
                        cout<<" hajar";
                    else if(j==5||j==12)
                        cout<<" lakh";
                    else if(j==7)
                        cout<<" kuti";
                    indicator=1;
                }
                else if(indicator&&j==7){
                    cout<<" kuti";
                    indicator=1;
                }
            }
            else if((j==2 ||j==9)&& a[j]!='0'){
                if(indicator)
                    cout<<' ';
                cout<<a[j];
                cout<<" shata";
                indicator=1;
            }
            else if( (j==1||j==4||j==6||j==8||j==11||j==13) && a[j]!='0'){
                if(indicator)
                    cout<<' ';
                cout<<a[j];
                indicator=1;
            }
            else if(j==14&&a[j]!='0'){
                cout<<a[j]<<" kuti";
                indicator=1;
            }
        }
        if(!indicator)
            cout<<'0';
        indicator=0;
        cout<<'\n';
        i++;
    }
    return 0;
}
