#include<stdio.h>
void main()
{
    int i,a[]={1,2,3,4,5,6,7,8,9};
    int *ptr=a;
    for(i=0;i<=8;i++)
    {
        printf("%d ",*(ptr+i));
        
    }
}