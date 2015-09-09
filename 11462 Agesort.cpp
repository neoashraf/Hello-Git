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

int dividetomerge(vector<int> &input);
int  mergeLR(vector<int> &Left,vector<int> &Right,vector<int> &input);
long long int z=0;

int main() {
    freopen("in.txt","w",stdout);
    int num,in,i;
    vector<int> input;
    while(cin>>num){
        if(num==0)
            break;
        for(i=0;i<num;i++){
            cin>>in;
            input.push_back(in);
        }
        dividetomerge(input);
        vector<int>::iterator it;
        it=input.begin();
        cout<<*it;
        for(it=input.begin()+1; it!=input.end(); ++it)
            cout<<' '<<*it;
        cout<<endl;
        input.clear();
    }
    return 0;
}

int dividetomerge(vector<int> &input){
    int inputsize=input.size();
    vector<int> Left,Right;
    int i,j,l,r;
    if(inputsize<2)
        return 1;
    l=inputsize/2;
    r=inputsize-l;
    for(i=0;i<l;i++){
        Left.push_back(input[i]);
    }
    for(i=l;i<inputsize;i++){
        Right.push_back(input[i]);
    }
    dividetomerge(Left);
    dividetomerge(Right);
    mergeLR(Left,Right,input);
}

int  mergeLR(vector<int> &Left,vector<int> &Right,vector<int> &input){
    int i=0,j=0,k=0;
    int l=Left.size();
    int r=Right.size();
    while(i<l &&j<r){
        if(Left[i]<Right[j]){
            input[k++]=Left[i++];
        }
        else if(Left[i]==Right[j])
            input[k++]=Left[i++];
        else if(Left[i]>Right[j]){
            input[k++]=Right[j++];
        }
    }
    while(i<l){
         input[k++]=Left[i++];
    }
    while(j<r){
         input[k++]=Right[j++];
    }
}
