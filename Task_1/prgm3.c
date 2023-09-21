#include <stdio.h>
void main() 
{
    int n,m,a[10][10],x;
    printf("enter the number of rows and columns:");
    scanf("%d",&n);
    m=n;
    
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int j=1;j<=m;j++)
        {
           x=i+j;
           printf("%d\t",x);
        
        }
        
    }
}
