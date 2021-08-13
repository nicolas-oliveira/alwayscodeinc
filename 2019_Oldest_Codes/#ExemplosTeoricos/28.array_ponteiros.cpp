#include <iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5};
    int* parray = &array[4];
    int i = 4;
    while (i >= 0){
        cout << *parray << endl;
        parray--;
        i--;
    }
    return 0;
}