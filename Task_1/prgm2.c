#include <stdio.h>
void main() 
{
    int n,m,a[10][10];
    printf("enter the number of rows and columns:");
    scanf("%d",&n);
    m=n;
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<m;j++)
        {
           printf("1\t",a[i][j]); 
        }
        
    }
}
