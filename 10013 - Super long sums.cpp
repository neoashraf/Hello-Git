#include <iostream>
#include <cstdio>
#include<algorithm>
#include<string>
using namespace std;

string adder(string a, string b);
string removeleadingzeros(string a);

int main(){
    int n,m,z=1,i;
    string a,b;
    //freopen("in.txt","w",stdout);
    cin>>n;
    while(n--){
        cin>>m;
        a="";b="";
        while(m--){
            cin>>i;
            a+=i+'0';
            cin>>i;
            b+=i+'0';
        }
        if(z>1)
            cout<<endl;
        cout<<adder(a,b)<<endl;
        z++;
    }
    return 0;
}

string adder(string a, string b){
    int i,j,ts,zero=0;
    string ans="";
    int carry=0;
    int l1=a.size()-1;
    int l2=b.size()-1;
    for(i=l1,j=l2;i>=0||j>=0;i--,j--){
        if(i<0)
            ts=carry+b[j]-'0';
        else if(j<0)
            ts=carry+a[i]-'0';
        else
            ts=carry+(a[i]-'0')+(b[j]-'0');
        carry=ts/10;
        ts%=10;
        ans+=ts+'0';
    }
    if(carry)
        ans+=carry+'0';
    reverse(ans.begin(),ans.end());
    return ans;
}

string removeleadingzeros(string a){
    int zero=0,i;
    int l1=a.size()-1;
    for(int i=0;i<l1;i++){
        if(a[i]=='0')
            zero++;
        else
            break;
    }
    if(i==l1+1)
        return 0;
    else
        return a.substr(zero);
}
