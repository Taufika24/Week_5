#include <stdio.h>
int main() 
{
    int n,i,sum=0,count=0;
    printf("Enter size of array");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter array");
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        count++;
        printf("%d ",sum/count);
    }
    
    return 0;
}
