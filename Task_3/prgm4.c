#include <stdio.h>

void main() 
{
    char a[100];
    int len=0;
    
    printf("Enter a str:\n");
    scanf("%s",a);
    
    for(int i=0;a[i]!='\0';i++)
    {
        len++;
    }
    printf("%d is the length of the str",len);
}
