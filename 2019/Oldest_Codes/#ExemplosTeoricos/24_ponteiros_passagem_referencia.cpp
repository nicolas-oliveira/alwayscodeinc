#include <iostream>
using namespace std;
void passagem(int* n){
    *n = 20;
}

int main(int argc, char const *argv[]){
    int var = 10;
    passagem(&var);
    cout << var << endl;
    /*

    E o mesmo que:
    int var = 10;
    int* pvar;
    pvar = &var;
    
    */
    return 0;
}
