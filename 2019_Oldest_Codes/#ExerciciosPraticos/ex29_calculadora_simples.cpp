/*
Escrever um programa que simule um calculador simples, leia dois inteiros e um caractere.
Se o caractere for um +, é visualizada a soma; se for um -, é visualizada a subtração; se for *, 
e visualizado o produto; se for um /, é visualizado o quociente e se for %, se imprima o resto.
*/

#include <iostream>
using namespace std;
int main(){
    char cal;
    int a, b, calc;
    float a1 = 0.0 , b1 = 0.0 , calc1 = 0.0;
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite outro numero: ";
    cin >> b;
    cout << "Escolha uma operacao(+ , - , / , * , %): ";
    
    do{
        cin >> cal;
        if(cal != '\n'){
            cin.ignore();
        }
        if(cal == '+'){
            
            calc = a + b;

            }else if(cal == '-'){
                
                calc = a - b;

                }else if(cal == '/'){
                    
                    a1 = (float)a;
                    b1 = (float)b;
                    calc1 = (float)calc;
                    calc1 = (a1 / b1) ;

                    }else if(cal == '%'){
                        
                        calc = a % b;

                        }else if(cal == '*'){
                            
                            calc = a * b;
                            
                            }else{
                                
                                system("clear");
                                cout << "Escolha uma operacao(+ , - , / , * , %): ";
                                
                            }
                            
    }while(cal != '+' && cal != '-' && cal != '/' && cal != '%' && cal != '*');
    if(cal != '/'){
        cout << a << cal << b << " = " << calc << endl;
    }else{
        cout << a1 << cal << b1 << " = " << calc1 << endl;
    }
    return 0;
}