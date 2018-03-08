#include <stdio.h>
#include<string.h>
void main()
{ 
    char a[10],b[10];
    int k,c=0,c1,c2,i;
    printf("Enter 2 strings");
    scanf("%s %s",a,b);
    printf("Enter the characters differ");
    scanf("%d",&k);
    c1=strlen(a);
    c2=strlen(b);
    if(c1==c2)
    {
        for(i=0;i<c1;i++)
        {
            if(a[i]!=b[i])
            c++;
        }
    }
    if(c==k)
    printf("yes");
    else
    printf("No");
    
}



