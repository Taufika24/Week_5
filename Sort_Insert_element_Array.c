#include <stdio.h>
int main()
{
    int i,j,k,n,val,pos;
    printf("Enter number of elements in array");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     
     printf("Enter value to be inserted");
     scanf("%d",&val);
     
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
           if (a[j]>a[j+1])
           {
               k=a[j];
               a[j]=a[j+1];
               a[j+1]=k;
           }
       }
    }
    
    for(i=0;i<n;i++)
    {
        if (a[i]>val)
        {
            pos=i;
            break;
        }
    }
    
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
    
    a[pos]=val;
    for(i=0;i<n+1;i++)
        printf("%d",a[i]);
    
    return 0;
}
