#include<stdio.h>
#include<string.h>
char sample[20000000],ch,vowel[10]="AEIOUaeiou";
int i,j,v,c,d,l;
int main(){
    while(gets(sample)){
            l=strlen(sample);
            c=0;d=0,v=0;
        for(i=0;i<=l;i++){
            if((sample[i]>='A'&&sample[i]<='Z')||(sample[i]>='a'&&sample[i]<='z')){
                c++;
                if(d==0){
                    for(j=0;vowel[j]!='\0';j++){
                        if(sample[i]==vowel[j]){
                            printf("%c",sample[i]);
                            v=1;
                            break;
                        }
                    }
                    if(!v)
                        ch=sample[i];
                }
                if(d)
                    printf("%c",sample[i]);
                d++;
            }
            else if(c>=1 && ((sample[i]>=32 && sample[i]<=64) || (sample[i]>=91 && sample[i]<=96) ||(sample[i]>=123 && sample[i]<=126) ||sample[i]=='\0')){
                d=0;
                if(!v){
                    printf("%c",ch);
                    printf("ay");
                    c=0;
                    v=0;
                }
                else{
                    printf("ay");
                    c=0;
                    v=0;
                }
            }
            if(!c && sample[i]!='\0')
                printf("%c",sample[i]);
        }
        printf("\n");
    }
    return 0;
}

