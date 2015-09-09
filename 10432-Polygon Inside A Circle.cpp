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

#define PI 3.1415926535897932384626433832795029L
using namespace std;

int main() {
    int n;
    double r,a,k,tr,rr,p;
    while(cin>>r>>n){
        p=(double)360/(double)n;
        tr=sin(p*(PI/180));
        rr=(r*r)/2.00;
        a=tr*rr;
        k=n*a;
        printf("%.3f\n",k);
    }
    return 0;
}





#include <stdio.h>      /* printf */
#include <math.h>       /* sin */

#define PI 3.14159265

int main ()
{
  double param, result;
  param = 30.0;
  result = sin (param*PI/180);
  printf ("The sine of %f degrees is %f.\n", param, result );
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
double  pi=2*acos(0);
int main() {
    int n;
    double r;
    while(cin>>r>>n){
        cout<<fixed<<setprecision(3)<<0.5*(n*r*r*sin(2.0*pi/n))<<endl;
    }
    return 0;
}
