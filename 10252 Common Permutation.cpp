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
string input1,input2;
int l1,l2;
int binarysearch(char x);
int main() {
    int i,p;
    char ch;
    while(scanf("%c",&ch)!=EOF){
        if(ch=='\n')
            input1="\0";
        else{
            input1=ch;
            while(scanf("%c",&ch) ){
                if(ch=='\n')
                    break;
                input1+=ch;
            }
        }
        scanf("%c",&ch);
        if(ch=='\n')
            input2="\0";
        else{
            input2=ch;
            while(scanf("%c",&ch) ){
                if(ch=='\n')
                    break;
                input2+=ch;
            }
        }
        l1=input1.length();
        l2=input2.length();
        sort(&input1[0],&input1[l1]);
        sort(&input2[0],&input2[l2]);
        for(i=0;i<l1;i++){
            p=binarysearch(input1[i]);
            if(p!=-1)
                cout<<input1[i];
        }
        cout<<endl;
    }
    return 0;
}

int binarysearch(char x){
    int li=0,ui=input2.length()-1,mid;
    while(li<=ui){
        mid=(li+ui)/2;
        if(x==input2[mid]){
            input2.erase (input2.begin()+mid);
            return mid;
        }
        else if(x<input2[mid]){
            ui=mid-1;
        }
        else
            li=mid+1;
    }
    return -1;
}

