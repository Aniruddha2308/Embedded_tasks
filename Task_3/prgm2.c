#include <stdio.h>
#include <string.h>
void main() 
{
    int i,len,x=0,flag;
    char a[100],b;
    printf("Enter a str:\n");
    scanf("%s",a);
    printf("Enter the letter:\n");
    scanf(" %c",&b);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]==b)
        {
            x++;
            flag=1;
        }  
    }
    if(flag==1)
    {
        printf("The number of occurance of '%c' is %d", b,x);
    }
    else
    {
        printf("Letter not found in the string!");
    }

}
