#include <stdio.h>
int main()
{
    int n,i,j,value;
    int check;
    
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter sum to be found");
    scanf("%d",&value);
    
    for(j=0;j<n;j++)
    {
        for(i=j+1;i<n;i++)
        {
            if(arr[i]+arr[j]==value)
                printf("%d + %d = %d \n",arr[i],arr[j],value);
        }
        
    }
return 0;
}