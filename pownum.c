#include<stdio.h>
void main()
{
  int n,i,p=1,c=0;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=0;i<1000;i++)
  {
    p=p*2;
    if(n==p)
    {
    printf("Yes");
    c++;
    }
  }
  if(c==0)
  printf("No");
  }
  
