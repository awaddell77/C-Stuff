

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void prArr(int *arr, int arr_size){
    
    printf("Array size is: %d\n", arr_size);
    for (int i=0; i < arr_size; i++){
        printf("Number is: %d\n", arr[i]);
    }
}
void bubble_sort(int * arr, int arr_len){
    int temp;
    for (int i = 0; i < arr_len; i++){
        for (int j = 0; j < arr_len; j++){
            if (arr[i] < arr[j]){
                printf("Swapping %d and %d\n", arr[i], arr[j]);
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
                     
            }
            
            
            
        }
    }
}



int main(int argc, char** argv) {
    int h[] = {9, 4, 2, 7, 8, 5, 3, 1, 6,10};
    
    prArr(h,sizeof(h) /sizeof(int) );
    bubble_sort(h, sizeof(h) /sizeof(int) );
    prArr(h,sizeof(h) /sizeof(int)  );

    return (EXIT_SUCCESS);
}

