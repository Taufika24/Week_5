#include <stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter number of rows in array");
    scanf("%d",&row);
    printf("Enter number of columns in array");
    scanf("%d",&col);
    
    int a[row][col];
    int b[row][col];
    int c[row][col];
    int d[row][col];
    
    printf("Enter 1st array in row wise order");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
    
    printf("Enter 2nd array in row wise order");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            d[i][j]=a[i][j]-b[i][j];
    }
    
    printf("The sum of the 2 matrices is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",c[i][j]);
        
        printf("\n");
    }
    
    printf("The difference of the 2 matrices is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",d[i][j]);
        
        printf("\n");
    }

    
    return 0;
}
