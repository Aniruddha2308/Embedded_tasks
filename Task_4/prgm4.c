#include <stdio.h>
#include <string.h>
void main() 
{
    int flag=0,index,i,j,k,x,len1,len2,len3;
    char a[100],b[100],c[100],d[100];
    
    printf("Enter a str:\n");
    scanf("%s",a);
    
    printf("Enter the substring:\n");
    scanf("%s",b);
    
    printf("Enter the substring to be replaced:\n");
    scanf("%s",c);
    
    len1=strlen(a);
    len2=strlen(b);
    len3=strlen(c);
    
    x=len1-len3;
    
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
            for(k=0;k<len3;k++)
            {
                d[i+k]=c[k];
            }
            i+=k - 1;
        }
        else
        {
            d[i]=a[i];
        }
    }
    
    if(flag==1)
    {
        printf("The resultant string is %s\n",d);
    }
    else
    {
        printf("The substring is not found\n");
    }
}
