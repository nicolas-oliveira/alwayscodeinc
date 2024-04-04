#include <iostream>
using namespace std;
string binario(int x){
    string saida="";
    if(x==0)
        return "1";
    else
        return x%2 + binario((int)x/2);
}
int main(){
    int d;
    cin >> d;
    cout << "Binario " << binario(d);
    return 0;
}