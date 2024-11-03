#include <stdio.h>
int main()
{
    int i,n,value;
    printf("Enter number of elements");
    scanf("%d",&n);
    
    int a[n];
    
    printf("Enter sorted array");
    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    
    printf("Enter a number within the range of the array");
    scanf("%d",&value);
    
    for(i=0;i<n;i++)
    {
        if(a[i]>=value)
        {
            printf("The ceiling of %d is %d",value,a[i]);
            break;
        }
    }
    
    return 0;
}
