#include<stdio.h>
#include<string.h>

int i,j,k,t,charset,lineinpara,val[105],payment;
char ch[105],para[151000][10100];
float hh;
int main(){
    (scanf("%d",&t);
    while(t--){
            scanf("%d",&charset);
            getchar();
            for(i=0;i<charset;i++){
                scanf("%c %d",&ch[i],&val[i]);
                getchar();
            }
            scanf("%d",&lineinpara);
            getchar();
            payment=0;
            for(i=0;i<lineinpara;i++){
                gets(para[i]);
                for(k=0;k<charset;k++){
                    j=0;
                    while(para[i][j]!='\0'){
                        if(ch[k]==para[i][j]){
                            payment+=val[k];
                        }
                        j++;
                    }
                }
            }
            hh=(float)payment/(float)100;
            printf("%.2f$\n",hh);
    }
    return 0;
}
