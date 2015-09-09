#include <iostream>
#include <cstdio>
#include<algorithm>
#include<string>
using namespace std;

string multiply(string a,string b);
string adder(string a, string b);

int main(){
    int i,j;
    string a,b;
    while(cin>>a>>b){
        if(a=="0"||b=="0")
            cout<<"0"<<endl;
        else
            cout<<multiply(a,b)<<endl;
    }
    return 0;
}

string multiply(string a,string b){
    string ans="",str;
    int carry,i,j,k,temp;
    int l1=a.size()-1;
    int l2=b.size()-1;
    for(i=l1;i>=0;i--){
        str="";
        if(i<l1){
            for(k=0;k<l1-i;k++)
                str+='0';
        }
        carry=0;
        for(j=l2;j>=0;j--){
            temp=(a[i]-'0')*(b[j]-'0')+carry;
            carry=temp/10;
            temp%=10;
            str+=temp+'0';
        }
        if(carry)
            str+=carry+'0';
        reverse(str.begin(),str.end());
        if(i==l1)
            ans=str;
        else
            ans=adder(ans,str);
    }
    return ans;
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
