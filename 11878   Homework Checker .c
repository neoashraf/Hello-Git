#include<stdio.h>
#include<string.h>
int main(){
    char sample[20];
    int a[3],i,j,p,c=0,s;
    while(scanf("%s",sample)!=EOF){
        i=0;j=0;a[1]=0;a[2]=0;a[0]=0;
        while(i<strlen(sample)){
            if(sample[i]>='0'&&sample[i]<='9')
                a[j]=(a[j]*10)+(sample[i]-'0');
            else if(sample[i]=='+'){
                j++;
                p=1;
            }
            else if(sample[i]=='-'){
                j++;
                p=2;
            }
            else if(sample[i]=='=')
                j++;
            i++;
        }
        if(p==1){
            if(a[2]==(a[0]+a[1]))
                c++;
        }
        else if(p==2){
            if(a[1]>a[0]){
                s=a[0];
                a[0]=a[1];
                a[1]=s;
            }
            if(a[2]==(a[0]-a[1]))
                c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
