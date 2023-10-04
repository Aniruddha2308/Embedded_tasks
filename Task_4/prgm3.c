#include <stdio.h>
#include <string.h>
void main() 
{
    int flag=0,index,i,j,len1,len2;
    char a[100],b[100];
    
    printf("Enter a str:\n");
    scanf("%s",a);
    
    printf("Enter the substring:\n");
    scanf("%s",b);
    
    len1=strlen(a);
    len2=strlen(b);
    
    for(i=0;i<=(len1 - len2);i++)
    {
        flag=1;
        for(j=0;j<len2;j++)
        {
            if(b[j]!=a[i+j])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            index=i;
            break;
        }
    }
    if(flag==1)
    {
        printf("The substring is present from the index %d",index);
    }
    else
    {
        printf("The substring id NOT found in the string!");
    }
}
