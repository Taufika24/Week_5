#include <stdio.h>
int main()
{
    int i,j,k,order,sum;
    printf("Enter order of matrix");
    scanf("%d",&order);
    
    int a[order][order];
    int b[order][order];
    int c[order][order];
    
    printf("Enter 1st matrix in row wise order");
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
            scanf("%d",&a[i][j]);
    }
    
    printf("Enter 2nd matrix in row wise order");
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
            scanf("%d",&b[i][j]);
    }
    
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            sum=0;
            for(k=0;k<order;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }

    printf("The product of the 2 matrices is \n");
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
            printf("%d ",c[i][j]);
        
        printf("\n");
    }
    
    
    return 0;
}
