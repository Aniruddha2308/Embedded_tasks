#include <stdio.h>
void main() 
{
   int a[100],n,i,b[100];
   printf("enter the number of elements:\n ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter the number %d of array:",i + 1);
       scanf("%d",&a[i]);
   }
  
   for(i=0;i<n;i++)
   {
        b[i]=a[n - i - 1];
   }
    printf("The inverted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}
