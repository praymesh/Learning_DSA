#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <gnuplot_i.h>

int main()
{
    double cpu_time_used;
    clock_t start, end;

    start = clock();
    /* Code to execute
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d", sum);*/
    int n = 1000000;
    int array[n];
    for (int i = 0; i < n; i++) {
        array[i] = 1; 
    }
    int sum = 0;
    def sum_array(int array[], int n, int sum) {
        if (n == 0) {
            return sum;
        } else {
            return sum_array(array, n - 1, sum + array[n - 1]);
        }
    }
    
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken: %f", cpu_time_used);
    
    return 0;
}
