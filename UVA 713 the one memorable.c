#include<stdio.h>
#include<string.h>
int main(){
    int m,test,k=1,i,j,c,i1,j1,ii,jj,iii,jjj,a[205],b[205],r[205],s,l1,l2,p,f,n;
    char s1[205],s2[205];
    scanf("%d",&test);
    while(k<=test){
        scanf("%s %s",s1,s2);
        l1=strlen(s1);
        l2=strlen(s2);


        for(i=1;i<=l1;i++)
            a[i]=s1[i-1]-'0';
        if(a[l1]!=0){
        for(i=l1,i1=1;i>i1;i--,i1++){
            s=a[i1];
            a[i1]=a[i];
            a[i]=s;
        }
        iii=l1;
        }

        else{
            p=0;
            for(i=l1-1;i>=1;i--){
            if(p==0){
                if(a[i]==0)
                    p=0;
                else{
                    p=1;
                    iii=i;
                    break;
                }
            }
            }
        }
        if(p==1 && iii==i){
            for(i=iii,i1=1;i>i1;i--,i1++){
            s=a[i1];
            a[i1]=a[i];
            a[i]=s;
        }
        }




        for(j=1;j<=l2;j++)
            b[j]=s2[j-1]-'0';
        if(b[l2]!=0){
            for(j=l2,j1=1;j>j1;j--,j1++){
            s=b[j1];
            b[j1]=b[j];
            b[j]=s;
        }
        jjj=l2;
        }

        else{
            p=0;
            for(j=l2-1;j>=1;j--){
            if(p==0){
                if(b[j]==0)
                    p=0;
                else{
                    p=1;
                    jjj=j;
                    break;
                }
            }
            }
        }
        if(p==1 && jjj==j){
            for(j=jjj,j1=1;j>j1;j--,j1++){
            s=b[j1];
            b[j1]=b[j];
            b[j]=s;
        }
        }
        if(iii>=jjj){
            f=iii;
            m=f;
        }
        else{
            f=jjj;
            m=f;
        }




    c=0;
        for(ii=iii,jj=jjj,m=1;m<=f;ii--,jj--,m++){
           if(ii>0 && jj>0){
                r[m]=c+a[ii]+b[jj];
                c=r[m]/10;
                r[m]%=10;
           }
           else if(jj<=0 && i>0){
               r[m]=c+a[ii];
               c=r[m]/10;
               r[m]%=10;
            }
           else if(ii<=0 &&jj>0){
               r[m]=c+b[jj];
               c=r[m]/10;
               r[m]%=10;
            }
    }
     if(c==1)
            r[f+1]=c;



   if(r[1]!=0){
        if(c==1){
           for(m=1;m<=f+1;m++)
                printf("%d",r[m]);
        }
        else{
            for(m=1;m<=f;m++)
                printf("%d",r[m]);
        }

    }

    else{
        p=0;
        for(m=1;m<=f+1;m++){
        if(p==0){
            if(r[m]==0)
                p=0;
            else{
                p=1;
                n=m;
                break;
            }
        }
    }
    }
    if(p==1){
       if(c==1){
           for(m=n;m<=f+1;m++)
                printf("%d",r[m]);
        }
        else{
            for(m=n;m<=f;m++)
                printf("%d",r[m]);
        }
    }

    printf("\n");
    c=0;
    p=0;
    k++;
}

    return 0;
}
