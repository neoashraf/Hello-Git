#include<stdio.h>
#include<string.h>
char vowel[]={'a','e','i','o','u'};
int main() {
    int n,m,k,bal,l;
    char p[25][2][25];
    char mapple[25];
    while(scanf("%d %d",&n,&m)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%s %s",p[i][0],p[i][1]);
        }
        for(int i=0;i<m;i++){
            scanf("%s",mapple);
            bal=0;
            for(int j=0;j<n;j++){
                if( !strcmp(mapple,p[j][0]) || !strcmp(mapple,p[j][1])){
                    printf("%s\n",p[j][1]);
                    bal=1;
                    break;
                }
            }
            if(bal)
                continue;
            l=strlen(mapple);
            if(mapple[l-1]=='y'){
                for(k=0;k<5;k++){
                    if(mapple[l-2]==vowel[k]){
                        printf("%ss\n",mapple);
                        break;
                    }
                }
                if(l==1)
                    printf("ys\n");
                if(k==5&&l>1){
                    mapple[l-1]='i';
                    printf("%ses\n",mapple);
                }
            }
            else if(mapple[l-1]=='o'||mapple[l-1]=='x'||mapple[l-1]=='s'||(mapple[l-2]=='c'&&mapple[l-1]=='h')||(mapple[l-2]=='s'&&mapple[l-1]=='h')){
                    printf("%ses\n",mapple);
            }
            else{
                printf("%ss\n",mapple);
            }
        }
    }
    return 0;
}
