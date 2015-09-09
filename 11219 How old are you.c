
#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,i=1,age,d1,d2,m1,m2,y1,y2;
    char c1,c2,c3,c4;
    scanf("%d",&t);
    while(i<=t){
        i++;
        scanf("%d %c %d %c %d",&d1,&c1,&m1,&c2,&y1);
        scanf("%d %c %d %c %d",&d2,&c3,&m2,&c4,&y2);

        if(y2>y1){
            printf("Case #%d: Invalid birth date\n",i-1);
            continue;
        }


        else if(y2==y1){
            if(m2>m1){
                printf("Case #%d: Invalid birth date\n",i-1);
                continue;
            }
            else if(m2==m1){
                if(d2>d1){
                    printf("Case #%d: Invalid birth date\n",i-1);
                    continue;
                }
                else if(d2==d1){
                    printf("Case #%d: 0\n",i-1);
                    continue;
                }
                else{
                    printf("Case #%d: 0\n",i-1);
                    continue;
                }
            }
            else{
                printf("Case #%d: 0\n",i-1);
                continue;
            }
        }


        else{
            age=y1-y2;

            if(m1>m2)
                age=age;
            else if(m1==m2){
                if(d1>=d2)
                    age=age;
                else
                    age=age-1;
            }
            else
                age=age-1;
            if(age<=130)
                printf("Case #%d: %d\n",i-1,age);
            else
                printf("Case #%d: Check birth date\n",i-1);

        }

    }
    return 0;
}
