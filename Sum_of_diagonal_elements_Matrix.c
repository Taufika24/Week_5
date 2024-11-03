#include <stdio.h>
int main()
{
    int i,j,order,sum=0;
    printf("Enter order of matrix");
    scanf("%d",&order);
    
    int a[order][order];
    
    printf("Enter array in row wise order");
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
            scanf("%d",&a[i][j]);
    }
     
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
            {
                if(i==j)
                    sum=sum+a[i][j];
            }
        
    }
    printf("The sum of diagonal elements is %d",sum);
    return 0;
}
