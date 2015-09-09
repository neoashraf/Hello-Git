#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,t,n,me,x[100],y[100],r[100],xx,yy,tt,ttt,c;
    float rr[100];
    scanf("%d",&t);
    i=1;
    while(i<=t){
        scanf("%d %d",&n,&me);
        for(j=1;j<=n;j++){
            scanf("%d %d %d",&x[j],&y[j],&r[j]);
        }
        printf("Case %d:\n",i);
        for(k=1;k<=me;k++){
            scanf("%d %d",&xx,&yy);
            c=0;
            for(j=1;j<=n;j++){
                tt=(xx-x[j])*(xx-x[j]);
                ttt=(yy-y[j])*(yy-y[j]);
                rr[j]=(float)sqrt(tt+ttt);
                if(rr[j]<=r[j]){
                    c=1;
                    break;
                }
            }
            if(c)
                printf("Yes\n");
            else
                printf("No\n");
        }

        i++;
    }
    return 0;
}
