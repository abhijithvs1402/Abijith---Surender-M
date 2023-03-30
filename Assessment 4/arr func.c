#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i;
    printf("Enter n size: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("\nEnter elements:");
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
        
    }
    printf("\nsum : ");
    int t=0;
    for(i=0;i<n;i++){
        t+=*(arr+i);
        
    }
    printf("%d", t);
    free(arr);
    
}
