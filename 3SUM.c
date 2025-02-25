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
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)23
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    return 0;
}