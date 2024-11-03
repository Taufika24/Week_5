#include <stdio.h>
int main() 
{
    int n,i, j, k = 0, check,count=0;
    printf("Enter no of elements in array");
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("Enter Array");
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) 
    {
        check = 1;
        for (j = i + 1; j < n; j++) 
        {
            if (a[i] == a[j]) 
                check = 0;
            }
        if (check == 1)
        {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k; i++) 
        count++;
    printf("Number of distinct elements is %d",count);
}
