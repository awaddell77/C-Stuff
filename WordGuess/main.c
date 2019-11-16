

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
    char * word = malloc(length * sizeof(char));
    char temp; 
    for (int i=0; i < length; i++){
        temp = random_char(97,122);
        word[i] = temp;
        
        
    }
    return word;
}
int guess(char* word, int ch_size, int max_guess_cnt){
    int guess_cnt = 0;
    
    for (int i =0; i < max_guess_cnt; i++){
        char * temp;
        temp = r_str(ch_size);
        printf("Checking %s against %s\n", temp, word);
        int comp = strcmp(word, temp);
        guess_cnt += 1;
        free(temp);
        
        if (comp == 0){
            printf("Phrase and word are equal\n");
            return guess_cnt;
        }

    }
}
int main(int argc, char** argv) {
    int guess_cnt = 0;
    srand(time(0));
    char phrase[6];
    strcpy(phrase, "hello");
    char res;
    res = random_char(97, 122);
    char * test;
    test =  r_str(5);
    printf("Character is: %c\n", res);
    printf("String is: %s", test);
    int comp = strcmp(phrase, test);
    if (comp == 0){
        printf("Phrase and word are equal\n");
    }
    else{
        printf("Phrase and word do not match\n");
    }
    free(test);
    guess_cnt = guess(phrase, 6, 100);
    printf("Guessed %d times", guess_cnt);
    

    return 0;
}

