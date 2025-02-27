#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}