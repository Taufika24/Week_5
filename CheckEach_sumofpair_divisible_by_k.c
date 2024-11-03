#include <stdio.h>
int main() 
{
    int n,i,j,k,check=1,sum;
    printf("Enter size of array");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter array");
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    
    printf("Enter value");
    scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(((a[i]+a[j])%k)!=0)
            {
                check=0;
                break;
                
            }
            
        }
    }
    if(check==1)
        printf("True");
    if(check==0)
        printf("False");
    
    return 0;
}
