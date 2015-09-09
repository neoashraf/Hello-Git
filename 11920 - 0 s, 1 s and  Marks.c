#include<stdio.h>
#include<string.h>
int main(){
    char sample[1005];
    int n,i,j,k,l,one,zero,max=0;
    scanf("%d",&n);
    getchar();
    for(k=1;k<=n;k++){
        scanf("%s",sample);
        l=strlen(sample);
        for(i=0;i<l;i++){
            if(sample[i]=='?'){
                one=0;zero=0;
                if(sample[i-1]=='1'){
                    one++;
                    j=i-2;
                    while(sample[j]=='1'){
                        j--;
                        one++;
                    }
                }
                else if(sample[i-1]=='0'){
                    zero++;
                    j=i-2;
                    while(sample[j]=='0'){
                        j--;
                        zero++;
                    }
                }
                if(sample[i+1]=='1'){
                    one++;
                    j=i+2;
                    while(sample[j]=='1'){
                        j++;
                        one++;
                    }
                }
                else if(sample[i+1]=='0'){
                    zero++;
                    j=i+2;
                    while(sample[j]=='0'){
                        j++;
                        zero++;
                    }
                }
            if(one>zero)
                sample[i]='0';
            else if(zero>one)
                sample[i]='1';
            else
                sample[i]=sample[i-1];
            }
        }
        zero=0;one=0;
        for(i=0;sample[i]!='\0';i++){
            if(sample[i]=='1'){
                    one++;
                    j=i+1;
                    while(sample[j]=='1'){
                        j++;
                        one++;
                    }
                    if(one>max)
                        max=one;
                    one=0;
            }
            else{
                zero++;
                j=i+1;
                while(sample[j]=='0'){
                    j++;
                    zero++;
                }
                if(zero>max)
                    max=zero;
                zero=0;
            }
        }
        printf("Case %d: %d\n",k,max);
        max=0;
    }
    return 0;
}
