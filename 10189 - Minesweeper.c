#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,i,j,cc,count=0,a,b,c,d;
    char sample[110][110];
    cc=1;
    while(scanf("%d %d",&n,&m)){
        if(n==0 && m==0)
            break;
        for(i=0;i<n;i++)
            scanf("%s",sample[i]);
        if(cc>1)
            printf("\n");
        printf("Field #%d:\n",cc);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(sample[i][j]=='.'){
                    a=i-1;
                    b=i+1;
                    if(a>=0 && sample[a][j]=='*')
                        count++;
                    if(b<n && sample[b][j]=='*')
                        count++;
                    c=j-1;
                    d=j+1;
                    if(c>=0 && sample[i][c]=='*')
                        count++;
                    if(d<m &&sample[i][d]=='*')
                        count++;
                    if(a>=0 && c>=0 && sample[a][c]=='*')
                        count++;
                    if(b<n && c>=0 &&sample[b][c]=='*')
                        count++;
                    if(a>=0 && d<m && sample[a][d]=='*')
                        count++;
                    if(b<n && d<m && sample[b][d]=='*')
                        count++;
                    printf("%d",count);
                    count=0;
                }
                else if(sample[i][j]=='*'){
                    printf("%c",sample[i][j]);
                }
            }
            printf("\n");
        }
        cc++;
    }
    return 0;
}

