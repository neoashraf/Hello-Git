#include<stdio.h>
int main(){
    int n,i=0,number,x,y,z;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&number);
        x=(number*567)/9;
        y=((x+7492)*235)/47;
        z=y-498;
        z/=10;
        z%=10;
        if(z<0){
          z=z*(-1);
          printf("%d\n",z);
        }
        else
            printf("%d\n",z);
        i++;
    }
    return 0;
}
