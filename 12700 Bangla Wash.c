#include<stdio.h>
#include<stdlib.h>
int main(){
    int ii,tc,a=0,b=0,w=0,t=0,n,i;
    char sample[100];
    scanf("%d",&tc);
    for(ii=1;ii<=tc;ii++){
        scanf("%d",&n);
        getchar();
        gets(sample);
        for(i=0;i<sample[i]!='\0';i++){
            if(sample[i]=='B')
                b++;
            else if(sample[i]=='W')
                w++;
            else if(sample[i]=='A')
                a++;
            else if(sample[i]=='T')
                t++;
        }
        if(a==n)
            printf("Case %d: ABANDONED\n",ii);
        else if(b==w)
            printf("Case %d: DRAW %d %d\n",ii,b,t);
        else if(b==n||(!w&&a&&!t))
            printf("Case %d: BANGLAWASH\n",ii);
        else if(w==n||(!b&&a&&!t))
            printf("Case %d: WHITEWASH\n",ii);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",ii,b,w);
        else if(w>b)
            printf("Case %d: WWW %d - %d\n",ii,w,b);
        a=0;b=0;w=0;t=0;
    }
    return 0;
}
