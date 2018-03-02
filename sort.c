#include<stdio.h>
void main()
{
	int a[20],n,i,j,t;
	printf("Enter number of values");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
     for(i=0;i<n-1;i++)
     {
     	 for(j=i;j<n;j++)
     	 {
     	if(a[j]<a[i])
     	{
     		t=a[i];
     		a[i]=a[j];
     		a[j]=t;
		 }
	}
     
	 }
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
