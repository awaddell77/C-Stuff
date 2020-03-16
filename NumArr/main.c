
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
void prArr(int *arr, int arr_size){
    for (int i=0; i < arr_size; i++){
        printf("Number is: %d\n", arr[i]);
    }
    
    
}
void populate_array(int *arr, int arr_size){
    //works
    for (int i = 0; i < arr_size; i++){
        arr[i] = i;
    }
    return;
}

    

int *add_to_arr(int *arr, int arr_size, int num){
    
    int n_size = arr_size +1;
    int * tstp = malloc(n_size * sizeof(int));
    //int tmpArr[n_size];
    memcpy(tstp, arr, arr_size * sizeof(int));
    //realloc(n_arr, n_size);
    tstp[n_size-1] = num;
    
    
    
    //printf("tmpArr has been populated\n");
    //tmpArr[arr_size] = num;
    //prArr(tmpArr, arr_size+1);
    return tstp;
    
    
    
    
}
int * dupe_arr(int * src_arr, int arr_size){
    int * tstp = malloc(arr_size * sizeof(int));
    memcpy(tstp, src_arr, arr_size * sizeof(int));
    return tstp; //returns block of memory
    
}
int main(int argc, char** argv) {
    
    int nums[10]; int * res;
    populate_array(nums, 10);
    //int * num_bucket = malloc(10 * sizeof(int)); 
    prArr(nums, 10);
    add_to_arr(nums, 10, 70);
    res = dupe_arr(nums, 10);
    printf("Copied array should print now.\n");
    prArr(res,12);
    int * n_arr = add_to_arr(nums, 10, 70);
    //int n_size = add_to_arr(num_bucket,10,70);
    printf("Array should print with new element.\n");
    prArr(n_arr, 11);
    /*
    for (int i=0; i < 10; i++){
        printf("Number is: %d\n", nums[i]);
    }
   */

    return 0;
}

