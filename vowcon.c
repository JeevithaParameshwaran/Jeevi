
#include <stdio.h>
#include<string.h>
void main()
{
    char s[30],b[10],d[10];
    int a,c=0,c1=0,i;
    printf("Enter the string");
    scanf("%s",s);
    a=strlen(s);
    for(i=0;i<a;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {   b[c]=s[i]; 
            c++;
        }
        else
        {
            d[c1]=s[i]; 
            c1++;
        }
    }
    for(i=0;i<c;i++)
    printf("%c",b[i]);
    for(i=0;i<c1;i++)
    printf("%c",d[i]);
    
}
