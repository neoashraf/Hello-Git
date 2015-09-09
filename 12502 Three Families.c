int pendolam(int n);
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    pendolam(a);
}
int pendolam(int n){
    int ar[1000],i=0,j,t,l,k;
    while(n!=0){
            ar[i]=n%2;
            n/=2;
            i++;
    }

    for(j=i-1,k=0;j>k;j--,k++){
        t=ar[i];
        ar[i]=ar[j];
        ar[j]=t;
    }
    for(l=0;l<=i;l++)
        printf("%d",ar[l]);
}
