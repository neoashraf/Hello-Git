#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n,c,count[100],max;
    char sample[100][3000];
    while(scanf("%d",&n)){
        getchar();
        if(n==0)
            break;
        for(i=0;i<n;i++)
            gets(sample[i]);
        for(i=0;i<n;i++){
            count[i]=0;
            for(j=0;sample[i][j]!='\0';j++){
                if(sample[i][j]=='X')
                    count[i]++;
            }
        }
        max=count[0];
        for(i=1;i<n;i++){
            if(count[i]>max)
                max=count[i];
        }
        c=0;
        for(i=0;i<n;i++){
            c+=(max-count[i]);
        }
        printf("%d\n",c);
    }
    return 0;
}
