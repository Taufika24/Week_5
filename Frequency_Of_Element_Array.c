#include <stdio.h>
int main()
{
    int n,i,j;
    
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    int count[10]={0};
    
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr[i]==j)
                count[j]++;
        }
    }
    
    for(i=0;i<10;i++)
        printf("The frequency of %d is %d \n",i,count[i]);
return 0;
}
