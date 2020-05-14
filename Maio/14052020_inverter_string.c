#include <stdio.h>
int main(){
    // Inverter string
    // opa! 0 1 2 3 A
    // !apo 3 2 1 0 B
    // B0 = A3
    // B1 = A2
    // B2 = A1
    // B3 = A0
    // B[i] = A[index - i]
    char string[60];
    int index;

    printf("Digite uma frase: ");
    scanf("%[^\n]s",string);

    for(index = 0; string[index]; index++);
    
    char reverse[index];
    for(int i = 0; i <= index; i++) {
        reverse[i] = string[index - i];
        printf("%c",reverse[i]);
    }
    return 0;
}