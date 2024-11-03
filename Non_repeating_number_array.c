#include <stdio.h>
int main()
{
    int n,i,j;
    int check;
    
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(j=0;j<n;j++)
    {
        check=1;
        for(i=j+1;i<n;i++)
        {
            if(arr[i]==arr[j])
                check=0;
        }
        
        if(check==1)
        {
            printf("First non repeating digit is %d",arr[j]);
            break;
        }
    }
return 0;
}