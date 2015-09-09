#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a[10000],i,l,c=0;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        l=0;
        if(c==0)
            printf("PERFECTION OUTPUT\n");
        c++;
        for(i=1;i<n;i++){
            if(n%i==0)
                l+=i;
        }
        if(l==n)
            printf("%5d  PERFECT\n",n);
        else if(l<n)
            printf("%5d  DEFICIENT\n",n);
        else
            printf("%5d  ABUNDANT\n",n);
}
    printf("END OF OUTPUT\n");
    return 0;
}

