#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
int main(){
    int i;
    do{
    cout << "-----------------------------" << endl;
    cout << "-----------------------------" << endl;
    cout << "       DIGITE A SENHA        " << endl;
    cin >> i;
    system("clear");
    if(i != 543){
        system("clear");
        cout << "-----------------------------" << endl;
        cout << "-----------------------------" << endl;
        cout << "       SENHA INCORRETA       " << endl;
        sleep(2);
        system("clear");
    }
    }while(i != 543);
    return 0;
}