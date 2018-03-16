
#include <stdio.h>
void main()
{
   int a,i,c=0;
   printf("Enter the number");
   scanf("%d",&a);
   for(i=0;i<1000;i++)
   {
       if(a==i*3||a==i*7)
       {
           printf("Yes");
           c++;
           break;
       }
   }
   if(c==0)
   printf("No");
}
