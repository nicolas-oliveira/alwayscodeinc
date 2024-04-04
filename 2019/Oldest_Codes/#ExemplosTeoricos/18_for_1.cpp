/*Calcular fatoriais usando for
!0 = 1! = 0
!3 = 3 * 2 * 1 = 6
!4 = 4 * 3 * 2 * 1  = 24
!5 = 5 * 4 * 3 * 2 * 1 = 120
*/
#include <iostream> 
using namespace std;
int main(){
    int num, fat = 1;
    cout << "Digite um numero: ";
    cin >> num;
    for(int i = 1; i < num; i++){
        fat *= (i + 1);
    }
    cout << "Fatorial: " << fat << endl;
    return 0;
}