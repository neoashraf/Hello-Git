int prime(int s);
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char sample[25],sp[60];
    int i,j,l,a[60],k,sum;
    for(i='a',j=1;i<='z';i++,j++){
        sp[j]=i;
        a[j]=j;
    }
    for(i='A',j=j;i<='Z';i++,j++){
        sp[j]=i;
        a[j]=j;
    }
    while(gets(sample)){
        l=strlen(sample);
        sum=0;
        for(i=0;i<l;i++){

            for(k=1;k<52;k++){
                if(sample[i]==sp[k]){
                     sum+=a[k];
                     break;
                }
            }
        }
        if(prime(sum))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
int prime(int s){
    int idiv;
    if(s==1|| s==2)
        return 1;
    else{
        idiv=2;
        ss:
        if(s%idiv==0)
            return 0;
        else{
            if(++idiv>sqrt(s))
                return 1;
            else
                goto ss;
        }
    }
}







int prime(int s);
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char sample[25],sp[60];
    int i,j,l,a[60],k,sum;
    for(i='a',j=1;i<='z';i++,j++){
        sp[j]=i;
        a[j]=j;
    }
    for(i='A',j=j;i<='Z';i++,j++){
        sp[j]=i;
        a[j]=j;
    }
    while(gets(sample)){
        l=strlen(sample);
        sum=0;
        for(i=0;i<l;i++){
            for(k=1;k<52;k++){
                if(sample[i]==sp[k]){
                     sum+=a[k];
                     break;
                }
            }
        }
        if(prime(sum))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
int prime(int s){
    int idiv;
    float sq=sqrt(s);
    for(idiv=2;idiv<=sq;idiv++){
        if(sq%idiv==0){
            return 0;
        }
        else
            return 1;
    }
}

