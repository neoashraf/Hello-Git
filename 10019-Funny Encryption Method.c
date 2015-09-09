#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,rem,sum,num;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        num=m;
        sum=0;
        while(num>0){
            rem=num%2;
            num/=2;
            sum+=rem;
        }
        printf("%d ",sum);
        sum=0;
        num=m;
        while(num>0){
            rem=num%10;
            if(rem==1||rem==2||rem==4||rem==8)
                sum+=1;
            else if(rem==3||rem==5||rem==6||rem==9)
                sum+=2;
            else if(rem==7)
                sum+=3;
            num/=10;
        }
        printf("%d",sum);
        printf("\n");
    }
    return 0;
}
