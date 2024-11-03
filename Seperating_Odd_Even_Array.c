#include <stdio.h>
int main()
{
    int n,i,j=0,k=0;
    
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    int even[n];
    int odd[n];
    
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
        
    }
    
    for(i=0;i<j;i++)
        printf("%d",even[i]);
    printf("\n");
    for(i=0;i<k;i++)
        printf("%d",odd[i]);
return 0;
}
