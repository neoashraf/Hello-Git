
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
    int t,g,l,k,j,sv,i;
    cin>>t;
    while(t--){
        cin>>g>>l;
        if(!(l%g))
            cout<<g<<' '<<l<<endl;
        else{
            int gl=g*l;
            sv=sqrt(gl);
            for(i=2,j=g*i;j<=sv;i++,j++){
                if(!(gl%j)){
                    k=gl/j;
                    if(k%j){
                        if(!(k%g) && !(l%j)&& !(l%k))
                            cout<<j<<' '<<k<<endl;
                    }
                }
            }
            if(j>sv)
                cout<<"-1"<<endl;
    }
    return 0;
}




//alternate solution


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
    int t,g,l,k,j,sv,i;
    cin>>t;
    while(t--){
        cin>>g>>l;
        if(!(l%g))
            cout<<g<<' '<<l<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}

