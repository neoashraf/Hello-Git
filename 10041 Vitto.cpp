#include<stdio.h>
#include<algorithm>
using namespace std;
int tc,n,ar[505],i;
int main(){
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        sort(&ar[0],&ar[n]);
        printf("%d\n",ar[n-1]-ar[0]);
    }
    return 0;
}

//        j=0;k=0;f=0;
//        while(j<n){
//            i=j;
//            if(ar[i]==ar[i+1]){
//                c[k][0]=ar[i];
//                while(ar[i]==ar[i+1]){
//                    c[k][1]++;
//                    i++;
//                }
//                k++;
//                j=i;
//                f=1;
//            }
//           j++;
//        }
//        if(!f){
//            d=0;
//            vh=(ar[0]+ar[n-1])/2;
//            for(i=0;i<n;i++){
//                if(vh>=ar[i])
//                    d+=(vh-ar[i]);
//                else
//                    d+=(ar[i]-vh);
//            }
//            printf("%d\n",d);
//        }
//        else{
//            j=0;
//            while(j<k){
//                vh=c[j][0];
//                c[j][1]=0;
//                for(i=0;i<n;i++){
//                    if(vh>=ar[i])
//                        c[j][1]+=(vh-ar[i]);
//                    else
//                        c[j][1]+=(ar[i]-vh);
//                }
//                j++;
//            }
//            maax=100000000;
//            for(i=0;i<k;i++){
//                if(c[i][1]<maax)
//                    maax=c[i][1];
//            }
//            d=0;
//            vh=(ar[0]+ar[n-1])/2;
//            for(i=0;i<n;i++){
//                if(vh>=ar[i])
//                    d+=(vh-ar[i]);
//                else
//                    d+=(ar[i]-vh);
//            }
//            if(d>maax)
//                printf("%d\n",maax);
//            else
//                printf("%d\n",d);
//        }
//    }
