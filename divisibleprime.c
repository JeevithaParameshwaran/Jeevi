#include<stdio.h>
#include<string.h>
void main()
{
 int n,i,j,count=0;
 printf("Enter the number");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
   if(n%i==0)
   {
     for(j=2;j<=i;j++)
     {
       if(i%j==0)
         count++;
     }
     if(count==1)
     {
       printf("%d ",i);
       count=0;
     }
     else
      count=0;
}
}
}
