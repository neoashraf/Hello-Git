#include<stdio.h>
#include<stdlib.h>
int m,i,j,c,k,d,min=0;
char sample[100][100];
int main(){
    while(scanf("%d,",&m)!=EOF){
            getchar();
        for(i=0;i<m;i++)
            scanf("%s",sample[i]);
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                if(sample[i][j]=='1'){
                    d=1;min=10000000;c=0;
                    for(k=i-1;k>=0;k--){
                        c++;
                        if(sample[k][j]=='3'){
                            d=0;
                            break;
                        }
                    }
                    if(c<min && !d)
                        min=c;
                    c=0; d=1;
                    for(k=i+1;k<m;k++){
                            c++;
                        if(sample[k][j]=='3'){
                            d=0;
                            break;
                        }
                    }
                    if(c<min && !d)
                        min=c;
                    c=0; d=1;
                    for(k=j-1;k>=0;k--){
                            c++;
                        if(sample[i][k]=='3'){
                            d=0;
                            break;
                        }
                    }
                    if(c<min && !d)
                        min=c;
                    c=0; d=1;
                    for(k=j+1;k<m;k++){
                            c++;
                        if(sample[i][k]=='3'){
                            d=0;
                            break;
                        }
                    }
                    if(c<min && !d)
                        min=c;
                }
                if(min)
                    break;
            }
            if(min){
                printf("%d\n",min);
                 break;
            }
        }
    }
    return 0;
}
