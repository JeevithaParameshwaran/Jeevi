#include<stdio.h>
#include<string.h>
void main()
{
   char str[30];
   int c=0,i,c1=0,a;
   printf("Enter the string");
   scanf("%s",str);
   a=strlen(str);
   for(i=0;i<a;i++)
   {
       if(str[i]=='a')
       c++;
       break;
   }
     for(i=0;i<a;i++)
     {
         if(str[i]=='b')
         c1++; 
         break;
     }
     if(c1==1||c==1)
     printf("Yes");
     else
     printf("No");
}
    
