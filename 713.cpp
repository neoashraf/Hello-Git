#include <iostream>
#include <cstdio>
#include<algorithm>
#include<string>
using namespace std;
string adder(string a, string b);
string checker(string c);
int main(){
    int n;
    string x,y;
    cin>>n;
    while(n--){
        cin>>x>>y;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        cout<<adder(checker(x),checker(y))<<endl;
    }
    return 0;
}

string adder(string a, string b){
    int i,j,ts,zero=0;
    string ans="";
    int carry=0;
    for(i=a.size()-1,j=b.size()-1;i>=0||j>=0;i--,j--){
        if(i<0)
            ts=carry+b[j]-'0';
        else if(j<0)
            ts=carry+a[i]-'0';
        else
            ts=carry+(a[i]-'0')+(b[j]-'0');

        carry=ts/10;ts%=10;
        ans+=ts+'0';
    }
    if(carry)
        ans+=carry+'0';
    ans=checker(ans);
    return ans;
}

string checker(string c){
    int zero=0,i;
    for(i=0;i<c.size();i++){
        if(c[i]=='0')
            zero++;
        else
            break;
    }
    if(zero)
        c.erase(c.begin(),c.begin()+zero);
    return c;
}
