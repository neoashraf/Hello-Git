#include<stdio.h>
#include<string.h>
int main(){
    char pizza[610];
    int i=1,t,j,c1,c2,c3,c4,c5,c6,l=0,a[10],min;
    scanf("%d",&t);
    while(i<=t){
        scanf("%s",pizza);
        l=strlen(pizza);
        c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
        for(j=0;j<l;j++){
            if(pizza[j]=='M')
                c1++;
            else if(pizza[j]=='A')
                c2++;
            else if(pizza[j]=='R')
                c3++;
            else if(pizza[j]=='G')
                c4++;
            else if(pizza[j]=='I')
                c5++;
            else if(pizza[j]=='T')
                c6++;
    }
    if(c1>=1 && c2>=3 && c3>=2 && c4>=1 && c5>=1 && c6>=1){
        c2/=3;
        c3/=2;
        a[0]=c1; a[1]=c2; a[2]=c3; a[3]=c4; a[4]=c5; a[5]=c6;
        min=a[0];
        for(j=0;j<6;j++){
            if(a[j]<min)
                min=a[j];
        }
        printf("%d\n",min);
    }
    else
        printf("0\n");
        i++;
    }
    return 0;
}
