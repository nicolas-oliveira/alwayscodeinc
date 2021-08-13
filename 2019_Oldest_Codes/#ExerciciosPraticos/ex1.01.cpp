/*1 - Escreva uma programa em C++, que receba o nome (vetor de caracteres - string), e
idade (int) de 4 pessoas. Depois verifique suas idades e imprima na tela:
Do mais velho para o mais novo (nome e idade);
Do mais novo pro mais velho;
Verifique se algum deles tem idade igual;
Verifique se a idade é válida;
○ Caso a idade não seja Valida, imprima o erro(exemplo: sua idade não pode
ser < zero), e o nome da pessoa cuja a idade não é valida.*/
/*Resolução possível do problema proposto*/

#include <iostream> 
// inclusão da biblioteca
using namespace std; //Definição do namespace

int main(){
char a1[30], b1[30], c1[30], d1[30]; //Vetor de caracteres (string) com tamanho 30, p1 indica o primeiro nome a assim por diante
int a, b, c, d; //declaração das variaveis para idade (inteiros), id1 indica a idade da p1, e assim por diante
//Para 4 pessoas de a até d e para 4 idades de a1 até d1
    /*Essa parte do código recebe o nome e idade das 4 pessoas*/
    cout << "Indique o nome seguido da idade das 4 pessoas: \n";
    cout << "Nome 1: ";
    cin >> a1;
    cout << "Idade 1: ";
    cin >> a;
    if (a <= 0){
        printf("Idade invalida\n");
    }
    
    cout << "Nome 2: ";
    cin >> b1;
    cout << "Idade 2: ";
    cin >> b;
    if(b <= 0){
        printf("Idade invalida\n");
    }

    cout << "Nome 3: ";
    cin >> c1;
    cout << "Idade 3: ";
    cin >> c;
    if(c <= 0){
        printf("Idade invalida\n");
    }
    

    cout << "Nome 4: ";
    cin >> d1;
    cout << "Idade 4: ";
    cin >> d;
    if(d <= 0){
        printf("Idade invalida\n");
    }

    if(a == b && b == c && c == d){
        cout << "Todos tem a mesma idade\n";
        }else{
            if(a == b && b == c){
                printf("%s, %s e %s tem a mesma idade\n", a1, b1, c1);
                }else{
                    if(b == c && c == d){
                        printf("%s, %s e %s tem a mesma idade\n", b1, c1, d1);
                        }else{
                            if(a == b){
                                printf("%s e %s tem a mesma idade\n", a1, b1);
                                }else{
                                    if(b == c){
                                        printf("%s e %s tem a mesma idade\n", b1, c1);
                                        }else{
                                            if(b == c){
                                                printf("%s e %s tem a mesma idade\n", c1, d1);
                                                }
                                        }
                                }
                        }
                }
        }

    //Procura atraves da setenca if else o maior de 4
    if(a > b && b > c && c > d){
    printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", a1, b1, c1, d1);
    }else{
        if(a > b && b > d && d > c){
            printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", a1, b1, d1, c1 );
        }else{
            if(a > d && d > b && b > c){
                printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", a1, d1, b1, c1 );
            }else{
                if(a > d && d > c && c > b){
                    printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", a1, d1, c1, b1 );
                }else{
                    if(a > c && c > d && d > b){
                        printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", a1, c1, d1, b1 );
                    }else{
                        if(a > d && d > c && c > b){
                            printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", a1, d1, c1, b1 );
                        }else{
                            if(b > a && a > c && c > d){
                                printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", b1, a1, c1, d1 );
                            }else{
                                if(b > a && a > d && d > c){
                                    printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", b1, a1, d1, c1 );
                                }else{
                                    if(b > d && d > a && a > c){
                                        printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", b1, d1, a1, c1);
                                    }else{
                                        if(b > d && d > c && c > a){
                                            printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", b1, d1, c1, a1 );
                                        }else{
                                            if(b > c && c > d && d > a){
                                                printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", b1, c1, d1, a1 );
                                            }else{
                                                if(b > c && c > a && a > d){
                                                    printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", b1, c1, a1, d1 );
                                                }else{
                                                    if(c > a && a > b && b > d){
                                                        printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", c1, a1, b1, d1 );
                                                    }else{
                                                        if(c > a && a > d && d > b){
                                                            printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", c1, a1, d1, b1 );
                                                        }else{
                                                            if(c > d && d > a && a > b){
                                                                printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", c1, d1, a1, b1 );
                                                            }else{
                                                                if(c > d && d > b && b > a){
                                                                    printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", c1, d1, b1, a1 );
                                                                }else{
                                                                    if(c > b && b > d && d > a){
                                                                        printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", c1, b1, d1, a1 );
                                                                    }else{
                                                                        if(c > b && b > a && a > d){
                                                                            printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", c1, b1, a1, d1 );
                                                                        }else{
                                                                            if(d > b && b > c && c > a){
                                                                                printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", d1, b1, c1, a1 );
                                                                            }else{
                                                                                if(d > b && b > a && a > c){
                                                                                    printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", d1, b1, a1, c1 );
                                                                                }else{
                                                                                    if(d > a && a > b && b > c){
                                                                                        printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", d1, a1, b1, c1 );
                                                                                    }else{
                                                                                        if(d > a && a > c && c > b){
                                                                                            printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", d1, a1, c1, b1 );
                                                                                        }else{
                                                                                            if(d > c && c > a && a > b){
                                                                                                printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", d1, c1, a1, b1 );
                                                                                            }else{
                                                                                                if(d > c && c > b && b > a){
                                                                                                    printf("%s, é mais velho que %s, que é mais velho que %s,que é mais velho que %s", d1, c1, b1, a1 );
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    /*
    1 a b c d
    2 a b d c
    3 a d b c
    4 a d c b
    5 a c d b
    6 a d c b
    7 b a c d
    8 b a d c
    9 b d a c 
    10 b d c a
    11 b c d a
    12 b c a d
    13 c a b d
    14 c a d b
    15 c d a b
    16 c d b a
    17 c b d a
    18 c b a d
    19 d b c a
    20 d b a c 
    21 d a b c
    22 d a c b
    23 d c a b
    24 d c b a
    */
   
    return 0;
}
