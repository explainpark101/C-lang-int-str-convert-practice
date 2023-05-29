#include <stdlib.h>

#include "util.h"

int main(void) {
    int input[] = {65, 66, 67, 68, 69, 70};
    char str[10];
    int length = 7;
    intToStr_void(input, length, str);
	printf("%s\n", str);

    char input_str[] = "ABCabc";
    int* output_int = strToInt_return(input_str);
    int i;
    for(i=0; i<strlen(input_str); i++){
        printf("%d ", output_int[i]);
    }
    printf("\n");

	return 0;
}