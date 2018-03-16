#include <stdio.h>
#include<string.h>
void main()
{
    int a[20],b[20],n,i,j,c=0;
    printf("Enter the number of elements");
    scanf("%d",&n);
    j=n;
    printf("Enter the elements");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[j-1])
        {
            c++;
            j--;
         }
    }
    if(c==n)
    printf("Yes");
    else
    printf("No");
    
}
