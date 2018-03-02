#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	int b;
	printf("Enter the string");
	scanf("%s",a);
	b=strlen(a);
    a[b]='.';
    printf("%s",a);
}
