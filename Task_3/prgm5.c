#include <stdio.h>
#include <string.h>

void main() 
{
    char a[100],b[100];
    int len1,len2;
    
    printf("Enter the str1:\n");
    scanf("%s",a);
    
    printf("Enter the str2:\n");
    scanf("%s",b);
    
    len1=strlen(a);
    len2=strlen(b);
    
    for(int i=0;i<len2;i++)
    { 
            a[i]=b[i];   
    }
    printf("String 1 : %s\n",a);
    printf("String 2 : %s",b);
}
