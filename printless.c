#include <stdio.h>
void main()
{ 
    int a[20],i,k;
    printf("Enter number of elements");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        if(a[i]<k)
        printf("%d ",a[i]);
    }
}



