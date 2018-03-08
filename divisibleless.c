#include <stdio.h>
void main()
{ 
    int a,i,c=0;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    {
        c++;
     printf("yes");
     break;
    }
    }
    if(c==0)
    printf("no");
}


