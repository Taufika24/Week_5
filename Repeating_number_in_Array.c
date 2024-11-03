#include <stdio.h>
int main()
{
    int n,i,j;
    int check;
    
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter array");
    for(i=1;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(j=0;j<n;j++)
    {
        check=0;
        for(i=j+1;i<n;i++)
        {
            if(arr[i]==arr[j])
                check=1;
        }
        
        if(check==1)
        {
            printf("First repeating digit is %d",arr[j]);
            break;
        }
    }
return 0;
}