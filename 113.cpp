#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
using namespace std;

int main() {
    double n, p;
    while(scanf("%lf%lf",&n,&p) == 2)
   {
       printf("%.0lf\n",pow(p,1/n));
    }
    return 0;
}
