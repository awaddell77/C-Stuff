#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h> 


char random_char(int start, int end){
    if (start >= end){
        perror("Start of range is larger or equal to end");
        return(-1);
    }
    //int temp = (start + (rand() * (end-start) + 1));
    char temp = rand() % (end-start+1) + start;
    //printf("temp is: %c\n", temp);
    return temp;
}
char * r_str(int length){
    srand(time(0));
    char * word = malloc(length * sizeof(char));
    char temp; 
    for (int i=0; i < length; i++){
        temp = random_char(97,122);
        word[i] = temp;
        
        
    }
    return word;
}