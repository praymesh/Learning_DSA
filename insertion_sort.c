#include<stdio.h>
#include<stdlib.h>
//#include<random>

int main() {
    int n = 10;
    //int *array = (int *)malloc(n * sizeof(int));
    int array[n];
    for(int i =0 ; i < n; i++) {
        array[i] = rand() % 100;
    }//generates random array 
    printf("the Unsorted array: ", array);
}