#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,in[100000],j,k,temp,zero;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&k);
        zero=0;
        scanf("%d",&in[0]);
        for(j=1;j<k;j++){
            scanf("%d",&temp);
            if(temp==in[j-1])
                zero++;
            in[j]=temp;
        }
        if(k>1){
                if(zero==k-1)
                    puts("Better luck next time!");
                else
                    puts("Happy Birthday Tutu!");
        }
        else
            puts("Better luck next time!");
    }
    return 0;
}



//5
//1
//5
//6
//1 2 3 4 5 6
//4
//0 0  0 0
//7
//0 0 0 0 0 0 0
//9
//0 6  0 1 2 3 4 5 6
