#define SIZE 1001
#include <iostream>
#include <cstdio>
#include<algorithm>
#include<string>

using namespace std;

string multiply(string a,string b);


int main(){
    int i,l,sum[SIZE],j,n;
    string fac[SIZE];
    fac[1]="1";
    for(i=2;i<SIZE;i++){
        fac[i] = to_string(i);
        fac[i]=multiply(fac[i-1],fac[i]);
    }
    for(i=1;i<SIZE;i++){
        l=fac[i].size();
        sum[i]=0;
        for(j=0;j<l;j++){
            sum[i]+=fac[i][j]-'0';
        }
    }
    while(cin>>n)
        cout<<sum[n]<<endl;
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
