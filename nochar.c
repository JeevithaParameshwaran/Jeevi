#include <stdio.h>
#include<string.h>

void main()
{
    char a[50];
    int b,count=0,i;
    printf("Enter the sentence");
    scanf("%[^\n]s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("%d",b-count);
}
