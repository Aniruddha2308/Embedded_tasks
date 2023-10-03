#include <stdio.h>
#include <string.h>

void main() 
{
    char a[100],b[100],c[100];
    int i,j;
    
    printf("Enter the str1:\n");
    scanf("%s",a);
    
    printf("Enter the str2:\n");
    scanf("%s",b);
    
    printf("Before concatenation:\n");
    
    printf("String 1 : %s\n",a);
    printf("String 2 : %s\n",b);
    
    printf("After concatenation:\n");
    
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }
    
    for(j=0;b[j]!='\0';j++)
    {
        c[i+j]=b[j];
    }
    
    c[i+j]='\0';
    
    printf("String 1 : %s\n",c);
    printf("String 2 : %s\n",b);
    
}
