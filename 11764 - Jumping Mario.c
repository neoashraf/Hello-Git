#include<stdio.h>
int main(){
    int t,n,wall_height[55],i,j,c,cc;
    scanf("%d",&t);
    i=1;
    while(i<=t){
        scanf("%d",&n);
        for(j=1;j<=n;j++)
            scanf("%d",&wall_height[j]);
        c=0,cc=0;
        for(j=1;j<n;j++){
            if(wall_height[j+1]>wall_height[j])
                c++;
            else if(wall_height[j+1]<wall_height[j])
                cc++;
        }

        printf("Case %d: %d %d\n",i,c,cc);
        i++;
    }
    return 0;
}
