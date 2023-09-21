#include <stdio.h>
void main() 
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
       for(int a=1;a<i;a++)
       {
           printf(" ");
       }
        for(int j=i;j<=n;j++)
        {
           
           printf("%d",i);
        
        }
        printf("\n");
    }
}
