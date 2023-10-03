#include <stdio.h>
#include <string.h>
void main() 
{
    int flag,i,index,len;
    char a[100],b;
    printf("Enter a str:\n");
    scanf("%s",a);
    printf("Enter the letter to be found:\n");
    scanf(" %c",&b);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]==b)
        {
            flag=1;
            index=i;
        }
    }
    if(flag==1)
    {
        printf("The index of first occurance: %d",index);
    }
    else
    {
        printf("Not found");
    }
}
