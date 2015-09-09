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
using namespace std;

struct cube{
    int x;
    int y;
}p[50];

bool compare(cube a,cube b){
    return(a.y<b.y);
}

int main() {
    int n,i,j,d,bigc,smallc,bigcube,smallcube,diff;
    double c;
    while(cin>>n){
        if(n==0)
            break;
        c=cbrt(n);
        bigc=ceil(c);
        i=0;
        while(bigc<=60){
            bigcube=bigc*bigc*bigc;
            diff=bigcube-n;
            c=cbrt(diff);
            smallc=floor(c);
            smallcube=smallc*smallc*smallc;
            d=bigcube-smallcube;
            if(n==d){
                p[i].x=bigc;
                p[i].y=smallc;
                i++;
                bigc++;
            }
            else{
                bigc++;
            }
        }
        if(i>0){
            sort(p,p+i,compare);
            j=0;
            while(j<i){
                if(p[j].y){
                    cout<<p[j].x<<' '<<p[j].y<<endl;
                    break;
                }
                j++;
            }
            if(j==i){
                cout<<"No solution"<<endl;
            }
        }
        else if(i==0 && bigc==61){
            cout<<"No solution"<<endl;
        }
    }
    return 0;
}











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
using namespace std;

struct cube{
    int x;
    int y;
}p[50];

bool compare(cube a,cube b){
    return(a.y<b.y);
}

int main() {
    int n,i,j,cubes[65],in,smallcube,bigc,diff;
    double c;
    for(i=1;i<=60;i++){
        cubes[i]=i*i*i;
    }
    while(cin>>n){
        if(n==0)
            break;
        in=0;
        c=cbrt(n);
        bigc=ceil(c);
        for(i=bigc;i<=60;i++){
            j=1;
            while(1){
                smallcube=j*j*j;
                diff=cubes[i]-smallcube;
                if(diff<n)
                    break;
                else if(n==diff){
                    in=1;
                    cout<<i<<' '<<j<<endl;
                    break;
                }
                j++;
            }
            if(in)
                break;
        }
        if(i==61)
              cout<<"No solution"<<endl;
    }
    return 0;
}
