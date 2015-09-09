#include<stdio.h>
int main(){
    int i,j,k,n,m,number[10000],sum,c;
    char ch='%';
    float avg,r;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        sum=0;
        j=0;
        while(j<m){
            scanf("%d",&number[j]);
            sum+=number[j];
            j++;
        }
        avg=(float)sum/(float)m;
        c=0;
        k=0;
        while(k<m){
                if(number[k]>avg)
                    c++;
            k++;
        }
        r=((float)100/(float)m)*(float)c;
        printf("%.3f%c\n",r,ch);
    }
    return 0;
}
