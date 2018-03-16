
#include <stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,j,n,c=0,k,p;
    printf("Enter the number");
    scanf("%s",s);
    printf("Enter k and p value");
    scanf("%d %d",&k,&p);
    printf("%c",s[k+p-1]);
}
