#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int letra(char &letr){
    letr = (int) letr;
    return letr+5;
}
int main(){
    char letr[20];

    fgets(letr, 20, stdin);
    
    letr[strlen(letr) - 1] = '\0'; 
    
    for(int i=0; i<strlen(letr); i++){
        cout << (char) letra(letr[i]);
    }
    return 0;
}