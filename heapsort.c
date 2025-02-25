#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void maxheapify(int array[], int n, int i) {
    int L = 2*i + 1;
    int R = 2*i + 2;
    int largest = i;
    if(L < n && array[L] > array[largest]) {
        largest = L;
    }
    if(R < n && array[R] > array[largest]) {
        largest = R;
    }
    if(largest != i) {
        int temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;
        maxheapify(array, n, largest);
    }

    //max heapify function
    

    return 1;
    
}
int main() {
    int n = 10;
    //int *array = (int *)malloc(n * sizeof(int));
    int array[10 ];
    for(int i =0 ; i < 10; i++) {
        array[i] = rand() % 100;
    }//generates random array 
    printf("Unsorted array: ",array);
    maxheapify(array, n, 0);
    printf("Heapified array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}