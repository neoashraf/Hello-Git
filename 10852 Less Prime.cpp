    #include<stdio.h>
    #include<string.h>
    #include<ctype.h>
    #define isalphabet(c) ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    #define vowel(n) (n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
    int main()
    {
       char str[2000000];
       int l,i,j,k,m;

       while(gets(str))
       {

          l=strlen(str);

          i=0; k=0; j=0;

          while(isalphabet(str[0]) && i<l)
          {
             if(vowel(str[i]))
             {
                for(j=i;isalphabet(str[j]) ; j++)
                {
                   printf("%c",str[j]);
                }
                printf("ay%c",str[j]);
                i=j+1;
             }
             else if(!(vowel(str[i])))
                {
                   m=i;
                   for(k=i+1; isalphabet(str[k]); k++)
                   {
                      printf("%c",str[k]);
                   }
                   printf("%cay%c",str[m],str[k]);
                   i=k+1;
                }
             else
                printf("%c",str[i]);



          }


       }

       return 0;
    }
