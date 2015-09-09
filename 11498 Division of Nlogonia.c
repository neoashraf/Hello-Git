#include<stdio.h>
#include<stdlib.h>
int main(){
     //freopen("t.txt","w",stdout);
    int t,i,cx,cy,x,y;
    while( scanf("%d",&t)){
        if(t==0)
            break;
        scanf("%d %d",&cx,&cy);
        for(i=1;i<=t;i++){
            scanf("%d %d",&x,&y);
            if(x==cx||y==cy)
                printf("divisa\n");
            else if(x>cx&&y>cy)
                printf("NE\n");
            else if(x<cx &&y>cy)
                printf("NO\n");
            else if(x<cx&&y<cy)
                printf("SO\n");
            else if(x>cx&&y<cy)
                printf("SE\n");
        }
    }
    return 0;
}
