#include <stdio.h>
void main() 
{
    int index;
    char a[100],b;
    
    printf("Enter a str:\n");
    scanf("%s",a);
    
    printf("Enter the index to be replaced:\n");
    scanf(" %d",&index);
    
    printf("Enter the letter:\n");
    scanf(" %c",&b);
    
    if(a[index]==b)
    {
        printf("Characters are same, Nothing got replaced!\n");
    }
    
    else
    {
        printf("Replaced '%c' with '%c'\n",a[index],b);
        a[index]=b;
    }
    
    printf("The final string is '%s'\n",a);
}
