#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,sample[110][110],row[110],col[110];
    while(scanf("%d",&n)){
        if(n==0)
            break;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                scanf("%d",sample[i][j];
        }
        r=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                row[i]+=sample[i][j];
            if(row[i]%2){
                r++;
                k=i+1;
                if(r>=2)
                    break;
            }
        }
        if(r==1||r==0){
            for(j=0;j<n;j++){
                for(i=0;i<n;i++)
                    col[i]+=sample[i][j];
                if(col[j]%2){
                    c++;
                    l=j+1;
                    if(c>=2)
                        break;
                }
            }
            if(r==0&&c==0)
                printf("OK\n");
            else if(r==1 && c==1)
                printf("Change bit (%d,%d)\n",k,c+1);
            else{
                printf("Corrupt\n");
            }
        }
        else{
            printf("Corrupt\n");
        }
    }
    return 0;
}

