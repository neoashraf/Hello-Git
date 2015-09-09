#include<stdio.h>
int main(){
    int n,m,i,j,in[105][105],p;
    while(scanf("%d %d",&n,&m)!=EOF){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&in[i][j]);
            }
        }
        p=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(!in[i][j])
                    break;
            }
            if( j==m)
                p++;
        }
        printf("%d\n",p);
        p=0;
    }
    return 0;
}
