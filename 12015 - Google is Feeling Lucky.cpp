#define SIZE 10
#include<stdio.h>
#include<algorithm>
using namespace std;

struct google{
    char url[105];
    int x;
}p[SIZE];
bool compare(google a,google b){
    return (a.x>b.x);
}
int main(){
    int i,j,n,maxm;
    scanf("%d",&n);
    j=1;
    while(j<=n){
        for(i=0;i<SIZE;i++){
            scanf("%s %d",p[i].url,&p[i].x);
        }
        sort(p,p+SIZE,compare);
        maxm=p[0].x;
        printf("Case #%d:\n",j);
        i=0;
        while(p[i].x==maxm){
            printf("%s\n",p[i].url);
            i++;
        }
        j++;
    }

    return 0;
}
