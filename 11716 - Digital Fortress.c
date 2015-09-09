#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int t,l,n,i,j,r;
    char sample[11000];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(sample);
        l=strlen(sample);
        r=sqrt(l);
        if(r*r!=l)
            printf("INVALID\n");
        else{
            for(i=0;i<r;i++){
                n=0;
                for(j=i;n<r;j+=r){
                    printf("%c",sample[j]);
                    n++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
