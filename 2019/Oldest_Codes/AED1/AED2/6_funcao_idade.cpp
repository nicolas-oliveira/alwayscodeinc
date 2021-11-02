#include <iostream>
using namespace std;
int idade_dias(int anos, int meses,int dias){
    return anos*365+meses*30+dias;
}
int main(){
    int anos, meses, dias;
    cin >> anos >> meses >> dias;
    
    cout << idade_dias(anos, meses, dias); 

    return 0;
}