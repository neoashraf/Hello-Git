#include<stdio.h>
#include<string.h>
int main(){
    int i,j,value,n,l,c;
    char sample[400],swap,esample[10],ch;
    while(gets(sample)){
        l=strlen(sample);
        if(sample[0]>='0' && sample[0]<='9'){
            for(i=0,j=l-1;i<j;i++,j--){
                swap=sample[i];
                sample[i]=sample[j];
                sample[j]=swap;
            }
            i=0;
            while(sample[i]!='\0'){
                if(sample[i]=='1'){
                    c= ((sample[i]-'0')*100)+((sample[i+1]-'0')*10)+(sample[i+2]-'0');
                    ch=c;
                    printf("%c",ch);
                    i+=3;
                }
                else{
                    c=((sample[i]-'0')*10)+(sample[i+1]-'0');
                    ch=c;
                    printf("%c",ch);
                    i+=2;
                }
            }
            printf("\n");
        }
        else{
            for(i=l-1;i>=0;i--){
                value=sample[i];
                j=0;
                while(value>0){
                    esample[j]=(value%10)+'0';
                    value/=10;
                    printf("%c",esample[j]);
                    j++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
