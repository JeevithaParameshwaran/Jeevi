
#include <stdio.h>
#include<string.h>
void main()
{
    char s[20],t;
    int i,a,j;
    printf("Enter the number");
    scanf("%s",s);
    a=strlen(s);
    for(i=0;i<a-1;i++)
    {   
        for(j=i;j<a;j++)
        {
        if(s[i]<s[j])
        {
            t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%c",s[i]);
    }
}
