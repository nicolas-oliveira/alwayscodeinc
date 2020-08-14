#include <stdio.h>
#include <string.h>
int main() {

    char arrayOfStrings[4][10] = { // 3 strings from 10 caracter size
        "Nicolas",
        "Fernando",
        "Letícia"
    };
    // initEnd == 0 or 1000 or some else
    // arrayOfStrings + 0 == initEnd + 10
    printf("%s\n", arrayOfStrings + 0);
    printf("%s\n", arrayOfStrings + 1);
    printf("%s\n", arrayOfStrings + 2);
    printf("---------\n");
    printf("%c ", *(*(arrayOfStrings + 0) + 0));
    printf("%c ", *(*(arrayOfStrings + 1) + 0));
    printf("%c ", *(*(arrayOfStrings + 2) + 0));


    return 0;
}
