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
    int max_sum = 0;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            if(sum>max_sum)
            {
                max_sum = sum;
            }
        }
    }
    printf("%d\n",max_sum);
    return 0;
}