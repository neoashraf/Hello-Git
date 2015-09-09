#define SIZE 1005
#include <iostream>
#include <cstdio>
#include<algorithm>
#include<string>
using namespace std;

string multiply(string a,string b);

int main(){
    int i,l,sum[SIZE],j,n;
    string fac[SIZE];
    fac[0]="1";
    fac[1]="1";
    for(i=2;i<SIZE;i++){
        fac[i] = to_string(i);
        fac[i]=multiply(fac[i-1],fac[i]);
    }
    while(cin>>n)
        cout<<n<<"!"<<endl<<fac[n]<<endl;
    return 0;
}

string multiply(string a,string b){
    string ans="";
    int carry,i,j,k,temp,m;
    int l1=a.size()-1;
    int l2=b.size()-1;
    for(i=0;i<l2;i++)
        a+='0';
    carry=0;
    for(j=l2,i=l1;j>=0;j--){
        if(j==l2)
            i=l1;
        else
            i=0;
        while( i>=0){
            temp=(a[i]-'0')*(b[j]-'0')+carry;
            for(k=j-1,m=i+1;k>=0;k--,m++){
                temp+=(b[k]-'0')*(a[m]-'0');
            }
            carry=temp/10;
            temp%=10;
            ans+=temp+'0';
            i--;
        }
    }
    if(carry)
        ans+=carry+'0';
    reverse(ans.begin(),ans.end());
    return ans;
}
