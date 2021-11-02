#include <iostream>
using namespace std;
int main(){
    int array[] = {1,256,3,4,5};
    int* parray = &array[0];

    cout << *(parray + 1) << endl; //Incremento de ponteiro acessa o array ou vetor 
    return 0;
}