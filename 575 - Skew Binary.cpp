#include <iostream>
#include <cstdio>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    string s;
    int i,result,l;
    while(cin>>s){
        if(s=="0")
            break;
        l=s.size();
        reverse(s.begin(),s.end());
        result=0;
        for(i=0;i<l;i++){
            s[i]=s[i]-'0';
            result+=s[i]*(pow(2,i+1)-1);
        }
        cout<<result<<endl;
    }
    return 0;
}

