#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,t,sum=0,n,l,ll;
    char sample[500];
    scanf("%d",&n);
    for(t=1;t<=n;t++){
        scanf("%s",sample);
        l=strlen(sample);
        i=0;
        printf("Case %d: ",t);
        while(i<l){
            if(sample[i]>='A' && sample[i]<='Z'){
                for(j=i+1;sample[j]>='0'&&sample[j]<='9';j++){
                    ll=sample[j]-'0';
                    sum=(sum*10) + ll;
                }
                for(k=0;k<sum;k++)
                    printf("%c",sample[i]);
                sum=0;
                i=j;
            }
        }
        printf("\n");
    }
    return 0;
}
