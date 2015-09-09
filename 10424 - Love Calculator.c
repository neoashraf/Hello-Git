#include<stdio.h>
#include<stdlib.h>
int main(){
    char sample1[26],sample2[26];
    int i,l1,l2,v1,v2,sv1,sv2,rem;
    float res;
    while(gets(sample1)!=NULL){
        gets(sample2);
        l1=strlen(sample1);
        l2=strlen(sample2);
        v1=0;
        for(i=0;i<l1;i++){
            if(sample1[i]>='a' && sample1[i]<='z')
                v1+=sample1[i]-96;
            else if(sample1[i]>='A' && sample1[i]<='Z')
                v1+=sample1[i]-64;
        }
        sv1=0;
        while(v1){
            rem=v1%10;
            sv1+=rem;
            v1/=10;
            if(!v1 && sv1>9){
                v1=sv1;
                sv1=0;
            }
        }
        v2=0;
        for(i=0;i<l2;i++){
            if(sample2[i]>='a' && sample2[i]<='z')
                v2+=sample2[i]-96;
            else if(sample2[i]>='A' && sample2[i]<='Z')
                v2+=sample2[i]-64;
        }
        sv2=0;
        while(v2){
            rem=v2%10;
            sv2+=rem;
            v2/=10;
            if(!v2 && sv2>9){
                v2=sv2;
                sv2=0;
            }
        }
        if(sv1==0 &&sv2==0)
            continue;
        if(sv1<sv2){
            res=((float)sv1/(float)sv2)*100.00;
        }
        else{
            res=((float)sv2/(float)sv1)*100.00;
        }
        printf("%.2f %%\n",res);
    }
    return 0;
}
