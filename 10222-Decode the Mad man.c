#include<stdio.h>
#include<string.h>
char input_string[10000000],ch,sample[]="qwertyuiop[]asdfghjkl;'zxcvbnm,.QWERTYUIOP{}ASDFGHJKL:ZXCVBNM<>?";
int main(){
    int l,i,j;
    gets(input_string);
    for(i=0;i<strlen(input_string);i++){
        if(input_string[i]==' '){
            printf("%c",input_string[i]);
        }
        else if(input_string[i]=='"')
            printf("l");
        else{
            for(j=0;j<strlen(sample);j++){
                if(input_string[i]==sample[j]){
                    ch=sample[j-2];
                if(ch<'a'){
                    printf("%c",ch+32);
                    break;
                }
                else{
                    printf("%c",ch);
                    break;
                }
            }
        }
    }
    }
    printf("\n");
    return 0;
}

