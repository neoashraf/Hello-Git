#include<stdio.h>
#include<string.h>
#include<math.h>
char sample[1000000][100];
int main(){
    int i=0,j,k,no,d[7],dot,ch,p;
    while( gets(sample[i]) ){
        i++;
    }
    for(i=0;sample[i][0]!='\0';i++){
            k=0;no=0;
        for(j=0;sample[i][j]!='\0';j++){
           if(sample[i][j]=='o'){
                no=1;
                d[k]=j;
                k++;
           }
           else if(sample[i][j]=='.')
            dot=j;
        }
        ch=0;
        if(!no)
            continue;
        else{
            for(j=0;j<k;j++){
                if(d[j]<dot)
                    p=dot-d[j]+2;
                else
                    p=(d[j]-dot-3)*(-1);
                ch+=pow(2,p);
            }
        }
        printf("%c",ch);
    }
    return 0;
}
