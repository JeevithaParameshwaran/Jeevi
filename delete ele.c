#include <stdio.h>
void main()
{ 
    int a[20],n,i,k;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter number of elements delete");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-k;i++)
    {
        printf("%d ",a[i]);
    }
}


