#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    double v, d, vf;
    cout << "Digite o valor do produto: ";
    cin >> v;

     if((v > 50) && (v <= 130)){
     d = (0.2);
     vf = (v - ( v * d ));
     }
     else{
        if( v > 130 ){
        d = (0.24);
        vf = (v - ( v * d ));
     }
        else{
        d = (0);
        vf = (v - ( v * d ));
        }
    }
    cout << vf << endl;
   
    system("pause");  
   return 0;  
  }    