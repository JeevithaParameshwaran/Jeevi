#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  int n,i,sum=0;
  printf("Enter the number");
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[i]%2!=0)
    {
      sum=sum+a[i];
    }
  }
  if(sum%2==0)
  printf("E");
  else
  printf("O");
  }
  
