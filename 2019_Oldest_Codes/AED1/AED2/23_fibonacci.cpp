#include <iostream>
using namespace std;
int fibo(int t){
    if((t==0) || (t==1))
        return 1;
    else
        return fibo(t-1) + fibo(t-2);
}
int main(){
    int termo;
    cout << "Fibonacci de qual termo deseja saber? ";
    cin >> termo;
    cout << "Fibonacci do " << termo << "o. termo e" << fibo(termo);
    return 0;
}