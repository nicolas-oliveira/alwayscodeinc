#include <iostream>
using namespace std;
int main(){
    int var = 10;
    int* p1, * p2;

    p1 = &var;
    p2 = &var;

    //Todos imprimem o endereço de var
    cout << p1 << endl;
    cout << p2 << endl;
    cout << &var << endl; 
    
    return 0;
}