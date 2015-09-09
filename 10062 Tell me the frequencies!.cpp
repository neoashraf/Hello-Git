#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct google{
    char frequency;
    int countdown;
}p[100];

bool compare(google a,google b);

int main(){
    int i,j,k,confirm,l,z=1;
    char sample[1010];
    while(gets(sample)){
        for(i=0;i<=100;i++)
            p[i].countdown=0;
        l=strlen(sample);
        for(i=0,k=0;i<l;i++){
            confirm=0;
            for(j=0;j<k;j++){
                if(sample[i]==p[j].frequency){
                    confirm=1;
                    p[j].countdown++;
                }
            }
            if(!confirm){
                p[k].frequency=sample[i];
                p[k].countdown++;
                k++;
            }
        }
        sort(p,p+100,compare);
        if(z>1)
            printf("\n");
        z++;
        for(i=k-1;i>=0;i--){
            printf("%d %d\n",p[i].frequency,p[i].countdown);
        }
    }
    return 0;
}

bool compare(google a,google b){
    if(a.countdown!=b.countdown)
        return (a.countdown>b.countdown);
    else
        return (a.frequency<b.frequency);
}
