#include <stdio.h>
int main()
{
    int i,j,k,row,col,sum;
    printf("Enter number of rows of matrix");
    scanf("%d",&row);
    printf("Enter number of columns of matrix");
    scanf("%d",&col);
    
    int a[row][col];
    int b[row][col];
    
    printf("Enter matrix in row wise order");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            b[j][i]=a[i][j];
        }
    }

    printf("The transpose of the matrix is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",b[i][j]);
        
        printf("\n");
    }
    
    return 0;
}
