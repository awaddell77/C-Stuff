/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: awaddell
 *
 * Created on November 19, 2019, 11:34 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h> 
/*
 * 
 */


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
int hash(char* word, int word_len){
    int h_code = 0;
    for (int i=0; i < word_len-1; i++){
       
        h_code =+ (int)word[i] * (i + 1); 
        printf("h_code is %d on %d . Converted word value is %d\n", h_code, i,(int)word[i]);
    }
    printf("Code is %d and being returned\n", h_code);
    return h_code;
    
    
    
}
int collision_test(int arr_size, int attempts){
    for (int i = 0; i < arr_size; i++){
        
    }
}
int main(int argc, char** argv) {
    char h = 'a'; int h_code;
    char word_arr[200][5];
    printf("Char value: %d\n",  h);
    char phrase[6];
    strcpy(phrase, "hello");
    h_code = hash(phrase, 6);
    
    printf("Code is: %d\n", h_code);
    printf("Code for 100 slots: %d\n",  h_code %100);
    strcpy(phrase, "ehlol");
    printf("This is phrase now: %s\n", phrase);
    int h_code2 = hash(phrase, 6);
    
    printf("Code is: %d\n", h_code2);
    printf("Code for 100 slots: %d\n", h_code2 %100 );
    //char * tst = r_str(6);
    //printf("WORD IS %s\n", tst);
    
    //strcpy(word_arr[0][0], tst);

    return (EXIT_SUCCESS);
}

