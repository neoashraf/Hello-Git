#include<stdio.h>
#include<math.h>
int main(){
    int i,t,k,kk,maxcount,m,count[10000],rv,c,finalnum;
    long long int u,jj,l,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&u,&l);
        for(jj=u,kk=0;jj<=l;jj++,kk++){
            j=jj;
            rv=sqrt(j);
            count[kk]=1;
            c=0;
            while(!(j%2)){
                c++;
                j/=2;
            }
            count[kk]*=(c+1);

            for(k=3;k<=rv;k+=2){
                    c=0;
                while(!(j%k)){
                    c++;
                    j/=k;
                }
                count[kk]*=(c+1);
                if(j==1)
                    break;
            }
            if(j!=1){
                if(j==(k-2))
                    count[kk]+=1;
                else
                    count[kk]*=2;
            }
        }
        maxcount=count[0];
        finalnum=0;
        for(m=0;m<kk;m++){
            if(count[m]>maxcount){
                maxcount=count[m];
                finalnum=m;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",u,l,u+finalnum,maxcount);
    }
    return 0;
}

