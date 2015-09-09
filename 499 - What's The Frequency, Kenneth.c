#include<stdio.h>
#include<string.h>
int l,i,j,c[1000005],jj,max=0,record,g=0,t,ab;
char sample[1000005],sple[1000005];
int main(){
    while(gets(sample)){
        record=0;
        l=strlen(sample);
        for(i=0;i<l;i++)
            c[i]=0;

        for(i=0;i<l;i++){
            if((sample[i]>='A'&&sample[i]<='Z')||(sample[i]>='a'&&sample[i]<='z')){
                c[i]=1;
                g=1;
                for(j=i+1;j<l;j++){
                    if(sample[j]==sample[i]){
                        c[i]++;
                        sample[j]=' ';
                    }
                }
            }
        }

        max=c[0];
        jj=0;
        sple[jj]=sample[0];
        for(i=1;i<l;i++){
           if(c[i]>max){
                max=c[i];
                record=i;
                jj=0;
                sple[jj]=sample[i];
            }
            else if(c[i]==max){
                jj++;
                sple[jj]=sample[i];
            }
        }

        if(jj==0 &&g==1){
            printf("%c %d\n",sample[record],max);
        }
        else if(jj>0&&g==1){
            for(i=0;i<=jj;i++){
                for(j=0;j<=jj-i-1;j++){
                    if(sple[j]>sple[j+1]){
                        t=sple[j];
                        sple[j]=sple[j+1];
                        sple[j+1]=t;
                    }
                }
            }
            for(i=0;i<=jj;i++)
                printf("%c",sple[i]);
            printf(" %d\n",max);
        }
        else{
            printf("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz 0\n");
        }
        g=0;
    }
    return 0;
}
