#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,n,l,d;
    char sample[105],t;
    while(scanf("%d",&n)){
        getchar();
        if(n==0)
            break;
        gets(sample);
        l=strlen(sample);
        d=l/n;
        j=0;
        for(i=1;i<=n;i++){
            for(k=(d*i)-1;j<k;j++,k--){
                t=sample[j];
                sample[j]=sample[k];
                sample[k]=t;
            }
            j=d*i;
        }
        puts(sample);
    }
    return 0;
}
