#include <stdio.h>
#include <string.h>

void main() 
{
    char a[100],b[100],c[100];
    int i,j,flag,len1,len2;
    
    printf("Enter the str1:\n");
    scanf("%s",a);
    
    printf("Enter the str2:\n");
    scanf("%s",b);
    
    len1=strlen(a);
    len2=strlen(b);
    
    if(len1==len2)
    {
        for(i=0;a[i]!='\0';i++)
        {
                if(a[i]==b[i])
                {
                    flag=1;
                }
                else
                break;
        }
    }
    
    if(flag==1)
    {
        printf("Two strings are same!\n");
    }
    else
    {
       printf("Two strings are different!\n");
    }
}
