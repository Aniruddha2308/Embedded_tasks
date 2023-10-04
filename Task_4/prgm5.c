#include <stdio.h>
#include <string.h>
void main() 
{
    int index,i,len2;
    char a[100],b[100],c[100];
    
    printf("Enter a str:\n");
    scanf("%s",a);
    
    printf("Enter the substring:\n");
    scanf("%s",b);
    
    printf("Enter the index from which substring is to be replaced:\n");
    scanf("%d",&index);

    len2=strlen(b);
    
    for(i=0;i<len2;i++)
    {
        c[index + i]=b[i];
    }
    for(i=0;i<index;i++)
    {
        c[i]=a[i];
    }
    printf("The resultant string is %s",c);
}
