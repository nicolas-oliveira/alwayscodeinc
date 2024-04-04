#include <iostream>
using namespace std;
void ordenacao(int *a){
    int hold;
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++){
            if(a[i] < a[j]){
                hold = a[i];
                a[i] = a[j];
                a[j] = hold;
            }
        }
}
int main(){
    int a[10];
    
    for(int i = 0; i < 10; i++)
    cin >> a[i];
    
    ordenacao(a);
    
    for(int i = 0; i < 10; i++)
    cout << a[i] << endl; 
    
    return 0;
}