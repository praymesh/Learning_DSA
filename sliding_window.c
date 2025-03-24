//sliding window 
// 1. find the sum of first k elements.
// 2. for each element from k to n, subtract the first element and add the next element.
// 3. update the max_sum if the sum is greater than max_sum.
// 4. return the max_sum.
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
    int k;
    scanf("%d",&k);
    int sum = 0;
    for(int i=0;i<k;i++)
    {
        sum += arr[i];
    }
    int max_sum = sum;
    for(int i=k;i<n;i++)
    {
        sum = sum - arr[i-k] + arr[i];
        if(sum>max_sum)
        {
            max_sum = sum;
        }
    }
    printf("%d\n",max_sum);
    return 0;
}z