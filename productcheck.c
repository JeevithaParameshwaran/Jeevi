#include<stdio.h>
void main()
{
  int a[20],n,i,p=1;
  printf("Enter number of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    p=p*a[i];
  }
  if(p%2==0)
  printf("Even");
  else
  printf("Odd");
}
