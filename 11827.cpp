#include<stdio.h>
#include<algorithm>
using namespace std;

int gcd(int n1,int n2);
int main(){
    int t,i,j,k,l,numbers[105],gmax,mostwanted,gcds[1000];
    char sample[105];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(sample);
        i=0;k=0;
        while(sample[i]!='\0'){
            if(sample[i]==' '){
                i++;
                continue;
            }
            else{
                j=i;
                numbers[k]=0;
                while(sample[j]!=' '){
                    numbers[k]=(numbers[k]*10)+(sample[j]-48);
                    j++;
                    if(sample[j]=='\0')
                        break;
                }
                i=j;
                k++;
            }
        }
        sort(&numbers[0],&numbers[k-1]);
        j=0;
        for(i=0;i<k-1;i++){
            for(l=i+1;l<k;l++)
                gcds[j++]=gcd(numbers[i],numbers[l]);
        }
        gmax=gcds[0];
        for(i=1;i<j;i++){
            if(gcds[i]>gmax){
                gmax=gcds[i];
            }
        }
        printf("%d\n",gmax);
    }
    return 0;
}

int gcd(int n1,int n2){
    int r;
    r=n2%n1;
    if(r==0)
        return n1;
    else{
        while(r>0){
        n2=n1;
        n1=r;
        r=n2%n1;
        }
        return n1;
    }
}
