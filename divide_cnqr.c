#include<stdio.h>

#include<stdlib.h>
int main() {
    int n = 10;

    int *array= malloc(n* sizeof(int));
    for(int i=0;i<n;i++) {
        array[i] = rand() % 100;
    }
    printf("Unsorted array: ", array);
    return 0;

}