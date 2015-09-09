#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,i,j,l,k,m,count[26],temp,ctemp;
    char sample[100][500],strcount[26];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
        gets(sample[i]);
    sample[i][0]='\0';
    m=0;
    for(i=1;i<=t;i++){
        for(j=0;sample[i][j]!='\0';j++){
             if((sample[i][j]>='a'&&sample[i][j]<='z')||(sample[i][j]>='A'&&sample[i][j]<='Z')){
                count[m]=1;
                strcount[m]=sample[i][j];
                l=j+1;
                for(k=i;sample[k][0]!='\0';k++){
                    while(1){
                        if(sample[k][l]=='\0'){
                            l=0;
                            break;
                        }
                        if((sample[k][l]>='a'&&sample[k][l]<='z')||(sample[k][l]>='A'&&sample[k][l]<='Z')){
                            if((sample[k][l]==sample[i][j])||(sample[k][l]==sample[i][j]-32)||(sample[k][l]==sample[i][j]+32)){
                                sample[k][l]='@';
                                count[m]++;
                            }
                        }
                        l++;
                    }
                }
            m++;
            }
            else
                continue;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m-i-1;j++){
            if(count[j]<count[j+1]){
                temp=count[j];
                ctemp=strcount[j];
                count[j]=count[j+1];
                strcount[j]=strcount[j+1 ];
                count[j+1]=temp;
                strcount[j+1]=ctemp;
            }
        }

    }
    for(i=0;i<m;i++){
        if(strcount[i]>='a'&&strcount[i]<='z')
            strcount[i]=strcount[i]-32;
    }
    for(i=0;i<m;i++){
        if(count[i+1]==count[i]){
            j=i;
            while(count[j]==count[i])
                j++;
            for(l=i;l<j;l++){
                for(k=i;k<j-l+i-1;k++){
                    if(strcount[k]>strcount[k+1]){
                        ctemp=strcount[k];
                        strcount[k]=strcount[k+1];
                        strcount[k+1]=ctemp;
                    }
                }
            }
            i=j;
        }
    }
    for(i=0;i<m;i++){
        printf("%c %d\n",strcount[i],count[i]);
    }
    return 0;
}
