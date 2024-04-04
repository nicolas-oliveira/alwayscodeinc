#include <iostream>
using namespace std;
#define SIZE 12
int main(){
    int vet_in[SIZE], hold;
    for(int i = 0; i < SIZE; i++){
        cout <<"[" << i << "]: ";
        cin >> vet_in[i];
    }
    
    for(int i = 0; i < SIZE-1; i++)
        for(int j = 0; j < SIZE-1; j++){     
            if(vet_in[j] < vet_in[j+1]){  
                hold = vet_in[j];  
                vet_in[j] = vet_in[j+1];
                vet_in[j+1] = hold;
            }
        }

    for(int i = 0; i < SIZE; i++)
        cout << vet_in[i] << endl;
    return 0;
}