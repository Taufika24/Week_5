#include <stdio.h>
int main() 
{
    int n,i,sum1=0,sum2=0,diff;
    printf("Enter size of array");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter array");
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    
    for(i=0;i<n/2;i++)
        sum1=sum1+a[i];
    for(i=n/2;i<n;i++)
        sum2=sum2+a[i];
    
    if(sum1>sum2)
    {
        diff=sum1-sum2;
        a[n-1]=a[n-1]+diff;
    }
    if(sum2>sum1)
    {
        diff=sum2-sum1;
        a[0]=a[0]+diff;
    }
    
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
