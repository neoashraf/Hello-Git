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
    int i,numerator,denumerator,b;
    while(scanf("%d %d",&numerator,&denumerator)==2) {
        printf("[");
        i=0;
        while(denumerator>1) {
            b=numerator/denumerator;
            numerator%=denumerator;
            swap(numerator,denumerator);
            if(i==0)
                printf("%d;",b);
            else
                printf("%d,",b);
            i++;
        }
        printf("%d]\n",numerator);
    }
    return 0;
}

