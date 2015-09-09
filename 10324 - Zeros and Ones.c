#include<stdio.h>
#include<string.h>
char sample[1000009];
int main(){
    int n,m,mm,i,j,t,c,cd,lim,l;
    mm=1;
    while(gets(sample)!=NULL){
        if(strcmp(sample,"\0")==0)
            break;
        l=strlen(sample);
        scanf("%d",&n);
        printf("Case %d:\n",mm);
        for(m=1;m<=n;m++){
            scanf("%d %d",&i,&j);
            getchar();
            if(i>j){
                t=i;
                i=j;
                j=t;
            }
            if(j>l){
                printf("No\n");
                continue;
            }
            c=sample[i];
            cd=1;
            for(lim=i+1;lim<=j;lim++){
                if(sample[lim]!=c){
                    cd=0;
                    break;
                }
            }
            if(cd)
                printf("Yes\n");
            else
                printf("No\n");
        }
        mm++;
    }
    return 0;
}
