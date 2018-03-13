#include<stdio.h>
void main()
{
  int a[30],n,i;
  printf("Enter number of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    if(a[i+1]%a[i]==0)
    printf("%d ",a[i+1]);
  }
}
