#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,f,i,j,k=1,t,p;
    scanf("%d",&t);
    while(k<=t){
        scanf("%d",&a);
        scanf("%d",&f);
        for(p=1;p<=f;p++){
            for(i=1;i<=a-1;i++){
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
            for(i=a;i>=1;i--){
                 for(j=i;j>=1;j--)
                    printf("%d",i);
                printf("\n");
            }
            if(p<f)
                printf("\n");
        }
        if(k<t)
            printf("\n");
        k++;
    }
    return 0;
}
