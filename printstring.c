#include<stdio.h>
#include<string.h>
void main()
{
   char str[30];
   int c=-1,k,a,i;
   printf("Enter the string");
   scanf("%s",str);
   printf("Enter the k value");
   scanf("%d",&k);
   a=strlen(str);
   for(;c<a;)
   {
    
     c=c+k;
     printf("%c ",str[c]);
   }
}
