#include<stdio.h>
#include<string.h>
int main(){
    int i,ii,num,l1,l2,j,k,no,vowel[25],consnt[25];
    char rname[25],gname[25];
    scanf("%d",&num);
    getchar();
    for(ii=1;ii<=num;ii++){
        gets(rname);
        gets(gname);
        l1=strlen(rname);
        l2=strlen(gname);
        j=0;
        k=0;
        if(l1!=l2){
             printf("No\n");
        }
        else{
            for(i=0;rname[i]!='\0';i++){
                if(rname[i]=='a'||rname[i]=='e'||rname[i]=='i'||rname[i]=='o'||rname[i]=='u'){
                    vowel[j]=i;
                    j++;
                }
                else{
                    consnt[k]=i;
                    k++;
                }
            }
            no=0;
            for(i=0;i<j;i++){
                if((gname[vowel[i]]=='a')||(gname[vowel[i]]=='e')||(gname[vowel[i]]=='i')||(gname[vowel[i]]=='o')||(gname[vowel[i]]=='u')){
                    no=0;
                }
                else{
                    no=1;
                    break;
                }
            }
            for(i=0;i<k;i++){
                if(gname[consnt[i]]!=rname[consnt[i]]){
                    no=1;
                    break;
                }
            }
            if(no){
                 printf("No\n");
            }
            else{
                  printf("Yes\n");
            }
        }

    }
    return 0;
}
