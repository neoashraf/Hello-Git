#include<stdio.h>
#include<string.h>
int main(){
   char me[10000];
   long long int i,c=0,f;
   while(gets(me)!=NULL){

    f=strlen(me);
   for(i=0;i<f;i++){
    if(me[i]=='"' && c==0){
        printf("``");
        c++;
    }
    else if(me[i]=='"' && c==1){
        printf("''");
        c--;
    }
    else
        printf("%c",me[i]);
   }
   printf("\n");
   }

   return 0;
}

/*
#include<stdio.h>
#include <string.h>
int main()
{
int i, j, k, l1, f;
char in[10000], out[10000];
while(gets(in) != EOF){
l1 = strlen(in);
f = 0;
for(i = 0, j = 0; i < l1; i++){
if(in[i] == '"' && f == 0){
out[j] = '`';
j++;
out[j] = '`';
j++;
f = 1;
}
else if(in[i] == '"' && f == 1){
out[j] = 39;
j++;
out[j] = 39;
j++;
f = 0;
}
else{
out[j] = in[i];
j++;
}
}
out[j] == '\0';
printf("%s\n", out);
}
return 0;
}
*/
