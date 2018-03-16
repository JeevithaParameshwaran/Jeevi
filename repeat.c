
#include <stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,j,n,c=0;
    printf("Enter the number");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            c++;
           
        }
    }
    if(c!=0)
    printf("Yes");
    else
    printf("No");
}
