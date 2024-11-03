#include <stdio.h>
int main()
{
    int n,i;
    
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    int copy[n];
    
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n;i++)
        copy[i]=arr[i];
    
    printf("Copied list in \n");
    for (i=0;i<n;i++)
        printf("%d",copy[i]);
return 0;
}
