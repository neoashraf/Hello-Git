/*#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int year,c=0,cc=0,ccc=0;
    while(scanf("%lld",&year)!=EOF){
        if((year%100)!=0){
            if(year%4==0)
            c=1;
        }
        else{
            if(year%400==0)
            c=1;
        }
        if((year%15)==0)
            cc=1;
        if(c==1 && (year%55)==0)
            ccc=1;

        if(c && cc && ccc){
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
            printf("This is bulukulu festival year.\n");
        }
        else if(c && cc){
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
        }
        else if(ccc){
            printf("This is leap year.\n");
            printf("This is bulukulu festival year.\n");
        }
         else if(cc && ccc){
            printf("This is hulukulu year.\n");
            printf("This is bulukulu festival year.\n");
        }
        else if(c)
            printf("This is leap year.\n");
        else if(cc)
            printf("This is hulukulu year.\n");
        else
            printf("This is an ordinary year.\n");
        c=0;
        cc=0;
        ccc=0;
        printf("\n");
    }
    return 0;
}
*/


int manual_division(char st2[],int div);
#include<stdio.h>
#include<string.h>
int main(){
    char st[10000];
    int c=0,cc=0,ccc=0,d100,d400,d4,d15,d55,l,x=0;
    while(scanf("%s",st)!=EOF){
            x++;
        d100=manual_division(st,100);
        d4=manual_division(st,400);
        d400=manual_division(st,4);
        d15=manual_division(st,15);
        d55=manual_division(st,55);

        if(!d100){
            if(!d4)
            c=1;
        }
        else{
            if(!d400)
            c=1;
        }
        if(!d15)
            cc=1;
        if(c==1 && (!d55))
            ccc=1;
    if(x>1)
        printf("\n");
        if(c && cc && ccc){
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
            printf("This is bulukulu festival year.\n");
        }
        else if(c && cc){
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
        }
        else if(ccc){
            printf("This is leap year.\n");
            printf("This is bulukulu festival year.\n");
        }
         else if(cc && ccc){
            printf("This is hulukulu festival year.\n");
            printf("This is bulukulu festival year.\n");
        }
        else if(c)
            printf("This is leap year.\n");
        else if(cc)
            printf("This is hulukulu festival year.\n");
        else
            printf("This is an ordinary year.\n");
        c=0;
        cc=0;
        ccc=0;
    }
    return 0;
}

int manual_division(char st2[],int div){
    int l,e=0,ei,i;
    l=strlen(st2);
    for(i=0;i<l;i++){
        ei=st2[i]-48;
        ei=e*10 + ei;
        if(ei>=div)
            e=ei%div;
        else{
            if(e==0 && (st2[i]-48)==0)
                e=0;
            else{
                ei=ei*10 +(st2[i+1]-48);
                e=ei%div;
                i++;
            }
        }
    }
    return e;
}







int manual_division(char st2[],int div,int l);
#include<stdio.h>
#include<string.h>
int main(){
   // freopen("output.txt","w",stdout);
    char st[1000005];
    int c,cc,ccc,d100,d400,d4,d15,d55,l,x=0,leap,flag;
    while(scanf("%s",st)!=EOF){
        x++;
        c=0;cc=0;ccc=0;d100=0;d400=0;d4=0;d15=0;d55=0;leap=0;flag=0;
        int z=strlen(st);
        d100=manual_division(st,100,z);
        d400=manual_division(st,400,z);
        d4=manual_division(st,4,z);
        d15=manual_division(st,15,z);
        d55=manual_division(st,55,z);
        if(x>1)
            printf("\n");
        if(d400==0||(d4==0&&d100!=0))
        {
             printf("This is leap year.\n");
             leap=1;
             flag=1;
        }
        if(d15==0)
        {
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        if(leap==1&&d55==0)
        {
            printf("This is bulukulu festival year.\n");
            flag=1;
        }
        if(flag==0)
             printf("This is an ordinary year.\n");
    }
    return 0;
}

int manual_division(char st2[],int div,int l){
    int e=0,ei=0,i;
    for(i=0;i<l;i++)
        {
        ei=st2[i]-48;
        ei=e*10 + ei;
            e=ei%div;
    }
    return e;
}


