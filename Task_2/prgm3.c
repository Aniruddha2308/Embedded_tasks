#include <stdio.h>
void main() 
{
   int a[100],n,b[100],sum[100];
   printf("enter the number of elements:\n ");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       printf("enter the number %d of array 1:",i + 1);
       scanf("%d",&a[i]);
   }
    for(int i=0;i<n;i++)
   {
       printf("enter the number %d of array 2:",i + 1);
       scanf("%d",&b[i]);
   }
   for(int i=0;i<n;i++)
   {
       sum[i]=a[i]+ b[i];
   }
   printf("Resultant array:\n");
   for(int i=0;i<n;i++)
    {
        printf("%d\n",sum[i]);
    }
