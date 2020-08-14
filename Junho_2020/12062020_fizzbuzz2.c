#include <stdio.h>
#include <string.h>
int main() {
    // numbers = {   |     words = {
    //     1,        |         null,
    //     2,        |         null,
    //     null,     |         Fizz,
    //     4,        |         null,
    //     null,     |         Buzz,
    //     ...       |         ...
    // }             |      }

    int numbers[101];
    char words[10][101];
    int j = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            strcpy(words[i], "FizzBuzz");
        }else if(i % 3 == 0){
            strcpy( words[i], "Fizz");
        }else if(i % 5 == 0){
            strcpy(words[i], "Buzz");
        }else {
            numbers[i] = i;
        }
    }
    for(int i = 1; i <= 100; i++){
        if(*(words[i]) != NULL) {
            printf("%s\n", words + i);
        }
        if(numbers[i] != NULL) {
            printf("%s\n", numbers[i]);
        }

    }
    return 0;
}