
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

int main() {
    int a,b,d;
    while(scanf("%d %d",&a,&b)){
        if(a==-1&&b==-1)
            break;
        if(a>b){
            swap(a,b);
        }
        d=b-a;
        if(d<51)
            printf("%d\n",d);
        else{
            d=(a+100)-b;
            printf("%d\n",d);
        }
    }
    return 0;
}

