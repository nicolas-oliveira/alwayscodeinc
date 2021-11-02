#include <iostream>
using namespace std;
//Este código é referente a aula 24 de ponteiros co curso de C++ Marcos Castro UDEMY
int my_strlen(char * str){
    int size = 0;
    
    while (*str != '\0'){
        size++;
        str++;
    }
    return size;
}

char * my_strcat(char * goal, char * start){
    char * result = NULL;
    int size_goal = my_strlen(goal);
    int size_start = my_strlen(start);

    result = new char[size_start + size_goal];
    char *p_str = result;
    
    while(*goal != '\0'){
        *p_str = *goal;
        p_str++;
        goal++;
    }
    
    while(*start != '\0'){
        *p_str = *start;
        p_str++;
        start++;
    }
    
    *p_str = '\0';
    
    return result;
}

int main(){
    char * nome1 = new char[100];
    char * nome2 = new char[100];
    char * result;

    cout << "Digite o primeiro nome: ";
    cin >> nome1;
    
    cout << "Digite o segundo nome: ";
    cin >> nome2;

    cout << my_strlen(nome1) << endl;
    cout << "Resultado: " << my_strcat(nome1, nome2) << endl;
    
    return 0;
}