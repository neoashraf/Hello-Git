#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,p,q,r=1,s,m,main_a[100000],selected[100000],dif[5000],swap,min,ppp;
    while(scanf("%d",&n)==1){
        for(p=1;p<=n;p++){
            scanf("%d",&main_a[p]);
        }
        scanf("%d",&m);
        for(p=1;p<n;p++){
            for(q=p+1;q<=n;q++){
                    if(main_a[p]+main_a[q]==m){
                        if(main_a[p]>main_a[q]){
                            swap=main_a[p];
                            main_a[p]=main_a[q];
                            main_a[q]=swap;
                        }
                        selected[r]=main_a[p];
                        r++;
                        selected[r]=main_a[q];
                        r++;
                    }
                }
        }
        for(s=1;s<r;s+=2){
            dif[s]=selected[s+1]-selected[s];
        }
        min=dif[1];
        ppp=1;
        for(s=3;s<r;s+=2){
            if(dif[s]<min){
                swap=dif[s];
                min=dif[s];
                ppp=s;
                dif[s]=swap;
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",selected[ppp],selected[ppp+1]);
        r=1;
        }
    return 0;
}
