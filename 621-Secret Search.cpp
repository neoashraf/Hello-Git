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
    int n,s;
    string ar;
    cin>>n;
    while(n--){
        cin>>ar;
        s=ar.size();
        if(ar.compare("1")==0||ar.compare("4")==0||ar.compare("78")==0){
            cout<<'+'<<endl;
        }
        else if(ar.at(s-1)=='5'&&ar.at(s-2)=='3')
           cout<<'-'<<endl;
        else if(ar.at(0)=='9'&&ar.at(s-1)=='4')
            cout<<'*'<<endl;
        else if(ar.at(0)=='1'&&ar.at(1)=='9'&&ar.at(2)=='0')
            cout<<'?'<<endl;
    }
    return 0;
}
