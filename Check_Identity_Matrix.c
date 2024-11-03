#include <stdio.h>
int main()
{
    int i,j,order,check=1;
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
                {
                    if(a[i][j]!=1)
                    {
                        check=0;
                        break;
                    }
                }
                
                else
                {
                    if(a[i][j]!=0)
                    {
                        check=0;
                        break;
                    }
                }
            }
        
    }
    if(check==1)
        printf("It is an identity matrix");
    else
        printf("It is not an identity matrix");
    return 0;
}
