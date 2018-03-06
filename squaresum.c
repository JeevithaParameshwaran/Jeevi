#include <stdio.h>

void main()
{
  int a,i=0,r,n;
  printf("Enter the value");
  scanf("%d",&a);
  do{
      r=a%10;
      i=i+r*r;
      a=a/10;
  }while(a!=0);
  printf("%d",i);
}
