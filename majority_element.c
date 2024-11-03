#include <stdio.h>
int main()
{
    int n,i,j,k,value;
    int check=0;
    
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    int count[10]={0};
    
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(j=0;j<n;j++)
    {
        for(i=0;i<10;i++)
        {
            if(arr[j]==i)
                count[i]++;
        }
        
    }
    
    for(k=0;k<10;k++)
    {
        if(count[k]>n/2)
        {
            printf("Majority element is %d",k);
            check=1;
        }
    }
    
    if(check==0)
        printf("No majority element");
return 0;
}