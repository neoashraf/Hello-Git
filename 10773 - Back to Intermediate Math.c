#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    float d,v,u,p,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%f %f %f",&d,&v,&u);
      if(v>=u || v==0)
            printf("Case %d: can't determine\n",i);
        else{
            a=d/(sqrt(u*u - v*v));
            b=d/u;
            p=a-b;
            printf("Case %d: %.3f\n",i,p);
        }
    }
    return 0;
}
