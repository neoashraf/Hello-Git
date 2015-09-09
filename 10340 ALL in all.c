#include<stdio.h>
#include<string.h>
int main(){
    char  sample[100000],sample2[110000];
    int l1,l2,d,count,i,j;
    while(scanf("%s %s",sample,sample2)!=EOF){
        l1=strlen(sample);
        l2=strlen(sample2);
        d=0,count=0;
        for(i=0;i<l1;i++){
            for(j=d;j<l2;j++){
                if(sample2[j]==sample[i]){
                    d=j+1;
                    count++;
                    break;
                }
            }
            if(d==0)
                break;
        }
        if(count==l1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
