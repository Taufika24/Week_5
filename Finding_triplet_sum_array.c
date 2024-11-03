#include <stdio.h>
int main()
{
    int n,i,j,k,value;
    int check=0;
    
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
            for(k=i+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==value)
                {
                    printf("%d + %d + %d = %d \n",arr[i],arr[j],arr[k],value);
                    check=1;
                }
            }
        }
        
    }
    if(check==0)
        printf("No such triplet is found");
return 0;
}