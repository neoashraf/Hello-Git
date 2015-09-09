#include<stdio.h>
#include<string.h>
int main(){
    int i,j,max,length[105],k,imax,space;
    char sample[105];
    char stringtable[105][105];
    freopen("in.txt","w",stdout);
    i=1;
    max=0;
    while(gets(sample)){
        strcpy(stringtable[i],sample);
        length[i]=strlen(stringtable[i]);
        if(length[i]>max){
            max=length[i];
            imax=i;
        }
        i++;
    }
    for(j=1;j<i;j++){
        for(k=length[j];k<max;k++){
            stringtable[j][k]=' ';
        }
    }
    for(k=0;k<max;k++){
        space=0;
        for(j=0;j<imax;j++){
            if(stringtable[j+1][k]=='\0')
                break;
            if(stringtable[j+1][k]>' '){
                stringtable[j][k]='\0';
                break;
            }
            if(stringtable[j+1][k]==' '){
                space=1;
                continue;
            }
        }
        if(space==1)
            stringtable[j-1][k]='\0';
    }
    for(j=0;j<max;j++){
        for(k=i-1;stringtable[k][j]!='\0';k--){
            printf("%c",stringtable[k][j]);
        }
        printf("\n");
    }
    return 0;
}
