
#include <stdio.h>
#include <stdlib.h>

//excludes 1
void numOfPrimes(int num){
    int cnt = 0;
    for (int i = 1; i < num; i++){
        for (int j=1; j < i; j++){
            if (i % j == 0 && j != 1){
                break;
            } 
            if (j == i-1){
                cnt++;
            }
            
        }
    }
    printf("Found %d primes\n", cnt);
    
}

int get_primes_to(int num, int * num_bucket, int s_size){
    int cnt = 0; int n_size = s_size;
    for (int i = 1; i < num; i++){
        for (int j=1; j < i; j++){
            if (i % j == 0 && j != 1){
                break;
            } 
            if (j == i-1){
                if (cnt > n_size-1){
                    n_size *= 2;
                    num_bucket = realloc(num_bucket, n_size);
                    
                    num_bucket[cnt] = i;
                    cnt++;
                   
                }
                else{
                    num_bucket[cnt] = i;
                    cnt++;
                }
               
            }
            
        }
    }
    printf("Found %d primes\n", cnt);
    return cnt;
    
}
void prArr(int *arr, int arr_size){
    
    printf("Array size is: %d\n", arr_size);
    for (int i=0; i < arr_size; i++){
        printf("Number is: %d\n", arr[i]);
    }
    
}
    
void retr_primes(int num_to){
    int num_bucket_size = 10;
    int * num_bucket = malloc(num_bucket_size * sizeof(int));
    int new_size = get_primes_to(num_to, num_bucket, num_bucket_size);
    printf("Printing num_bucket\n");
    prArr(num_bucket, new_size);
    free(num_bucket);
    
}
int main(int argc, char** argv) {
    numOfPrimes(100);
    retr_primes(100);
    
    return 0;
}

