#include <stdio.h>

void main()
{ 
    int a,b,i,j=0,c=0;
    printf("Enter range");
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++,j)
    {   
        for(j=0;j<b;j++)
        {
        if(i==j*j)
        c++;
        }
    }
    if(c!=0)
    printf("%d",c);
    else
    printf("%d",c);
    
}



