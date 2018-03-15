#include <stdio.h>

void main()
{
  int a[20],i,sum=0,n;
  printf("Enter the number of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    if(a[i]>a[i+1])
      sum=sum+a[i];
    else
      sum=sum+a[i+1];
   }
   printf("%d",sum);
}
