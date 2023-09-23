#include <stdio.h>

void main() {
   int a[100],n,sum1=0,sum2=0;
   printf("enter the number of elements:\n ");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       printf("enter the number %d:",i + 1);
       scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++)
   {
        if(a[i]%2==0)
        {
            sum1+=a[i];
            
        }
        else
        {
            sum2+=a[i];
        }
   }
   printf("Sum of even numbers=%d\n",sum1);
   printf("Sum of odd numbers=%d",sum2);
   
}
