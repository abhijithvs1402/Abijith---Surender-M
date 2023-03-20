#include <stdio.h>
#include <string.h>

int main()
{
    int size,m,arr[100][100];
    printf("Enter the size of array \n");
    scanf("%d",&size);
    printf("\nEnter the array elements\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter element to be replaced:\n");
    scanf("%d",&m);
    for(int i=1;i<size;i++)
    {
        for(int j=1;j<size;j++)
        {
            if(arr[i][j]==m)
            {
                arr[i][j]=arr[i-1][j] ;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
