#include <stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter number of rows in array");
    scanf("%d",&row);
    printf("Enter number of columns in array");
    scanf("%d",&col);
    
    int a[row][col];
    
    printf("Enter array in row wise order");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
     
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",a[i][j]);
        
        printf("\n");
    }

    
    return 0;
}
