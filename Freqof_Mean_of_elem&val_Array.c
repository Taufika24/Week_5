#include <stdio.h>
int main() 
{
    int n,i,j,k,check=1,avg;
    printf("Enter size of array");
    scanf("%d", &n);
    int a[n];
    int b[n];
   for(i=0;i<n;i++)
        b[i]=0;
    
    printf("Enter array");
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    
    printf("Enter value");
    scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {
        avg=(a[i]+k)/2;
        for(j=0;j<n;j++)
        {
            if(a[j]==avg)
                b[i]++;
        }
    }
    
    for(i=0;i<n;i++)
        printf("%d",b[i]);
    return 0;
}
