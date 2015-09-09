#include<stdio.h>
#include<string.h>
int main(){
    int l,i,j,c;
    char input_string[100000],sample[200]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    while(gets(input_string)!=NULL){
        l=strlen(input_string);
        for(i=0;i<l;i++){
             if(input_string[i]=='`'||input_string[i]=='Q'||input_string[i]=='A'||input_string[i]=='Z'||input_string[i]==' ')
                c=0;
            else if(input_string[i]>='a'&&input_string[i]<='z')
                c=0;
            else{
                j=0;
                while(sample[j]){
                if(input_string[i]==sample[j]){
                        input_string[i]=sample[j-1];
                        break;
                    }
                    j++;
                }
            }
        }
        puts(input_string);
    }
    return 0;
}
