//just a bit of practice

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void printChArr(char arr[], int arr_len){
    for (int i = 0; i < arr_len; i++){
        printf("Char: %c\n", arr[i]);
        
    }
    printf("\n");
    
    
}
void printIntArr(int arr[], int arr_len){
    for (int i=0; i < arr_len; i++){
        printf("Number: %d\n",arr[i]);
    }
}

int main(int argc, char** argv) {
    char arr[8] = "testing\0"; int nArr[] = {1, 2, 4, 6, 10};
    printChArr(arr, 7);
    printIntArr(nArr, 5);
    printf("Message: %s\n", arr);
    int a = 5; int b = 10;
    int res = a/b; double resD = (double) a / (double) b;
    printf("%d\n",res);
    printf("%f\n",resD);

    return 0;
}

