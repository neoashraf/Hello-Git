#include<stdio.h>
#include<string.h>
char sample[1000000],msample[1000000],rsample[1000000],rev[]="AEHIJLMOSTUVWXYZ12358",srev[]="A3HILJMO2TUVWXY51SEZ8";
int i,j,p,m,d,l,z=1;
int main(){
    while(scanf("%s",sample)!=EOF){
        l=strlen(sample);
        for(i=l-1,j=0;i>=0;i--,j++){
            rsample[j]=sample[i];
        }
        rsample[j]='\0';
        p=strcmp(sample,rsample);
        for(i=0;i<l;i++){
                d=0;
            for(j=0;rev[j]!='\0';j++){
                if(sample[i]==rev[j]){
                    msample[i]=srev[j];
                    d=1;
                    continue;
                }
            }
            if(!d){
                m=1;
                break;
            }
        }
        msample[i]='\0';
        if(d){
            for(i=l-1,j=0;i>=0;i--,j++){
                rsample[j]=msample[i];
            }
            rsample[j]='\0';
            m=strcmp(rsample,sample);
        }
        if(p!=0 && m!=0)
            printf("%s -- is not a palindrome.\n",sample);
        else if(!p && m!=0)
            printf("%s -- is a regular palindrome.\n",sample);
        else if(p!=0 && !m)
            printf("%s -- is a mirrored string.\n",sample);
        else if(!p && !m)
            printf("%s -- is a mirrored palindrome.\n",sample);
          printf("\n");
    }
    return 0;
}
