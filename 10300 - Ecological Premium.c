#include<stdio.h>
int main(){
    int n,f,i=1,j;
    long int fy,a,e,s=0,p;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&f);
        j=1;
        while(j<=f){
            scanf("%ld %ld %ld",&fy,&a,&e);
            p=fy*e;
            s+=p;
            j++;
        }
    printf("%ld\n",s);
    s=0;
    i++;
    }

    return 0;
}
