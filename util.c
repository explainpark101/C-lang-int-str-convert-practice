#include "util.h"

char* intToStr_return(const int int_arr[], int arr_size){
    int i;
    char* str = (char*) malloc((arr_size + 1) * sizeof(char));
    str[arr_size] = 0;
    for(i=0; i<arr_size; i++){
        str[i] = (char) (int_arr[i]);
    }
    return str;
}

void intToStr_void(const int int_arr[], int arr_size, char target_str[]){
    int i;
    target_str[arr_size] = 0;
    for(i=0; i<arr_size; i++){
        target_str[i] = (char) (int_arr[i]);
    }
    return target_str;
}

int* strToInt_return(const char str[]){
    const int length = strlen(str);
    int* int_arr = (int*) malloc(length * sizeof(int));
    int i;
    for(i=0; i<length; i++){
        int_arr[i] = (int)str[i];
    }
    return int_arr;
}

void strToInt_void(const char str[], int target_int[]){
    const int length = strlen(str);
    int i;
    for(i=0; i<length; i++){
        target_int[i] = (int)str[i];
    }
    return target_int;
}