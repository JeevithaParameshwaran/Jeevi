#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	int c,e,d,i=0;
	printf("Enter 2 strings");
	scanf("%s %s",a,b);
	c=strlen(a);
	d=strlen(b);
	if(c==d)
	{   do
	    {
	
		if(a[i]!=b[i])
		e++;
		i++;
	    }while(i<c);
	}
	if(e==1)
	printf("Yes");
	else
	printf("No");
}
