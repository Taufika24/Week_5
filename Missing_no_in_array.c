#include <stdio.h>
int main()
{
    int n,i,j;
    int check;
    
    printf("Enter N value");
    scanf("%d",&n);
    int arr[n-1];
    
    printf("Enter array");
    for(i=1;i<n-1;i++)
        scanf("%d",&arr[i]);
    
    for(j=1;j<n;j++)
    {
        check=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]==j)
                check=1;
        }
        
        if(check==0)
        {
            printf("Missing number is %d",j);
        }
    }
return 0;
}