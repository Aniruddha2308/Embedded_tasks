#include <stdio.h>
void main() 
{
   int a[100],n,b,flag,i,index;
   printf("enter the number of elements:\n ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter the number %d of array:",i + 1);
       scanf("%d",&a[i]);
   }
   printf("enter the number to be found:\n");
   scanf("%d",&b);
   for(i=0;i<n;i++)
   {
       if(a[i]==b)
       {
          flag=1;
          index=i;
       }
   }
   if(flag==1)
   {
       printf("The number was found in the index %d\n",index);
   }
   else
   {
       printf("The number was not found");
   }
}
