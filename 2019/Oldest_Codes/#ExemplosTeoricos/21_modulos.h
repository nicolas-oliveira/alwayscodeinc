#ifdef _21_MODULOS_H_
#define _21_MODULOS_H_

int fatorial(int n);
int quadrado(int side);
int area_retangulo(int side, int base);

#endif

int fatorial(int n){
    int fat = 1;
     for (int i = 1; i < n; i++){ // Recebendo um inteiro calcula-se o fatorial atraves de repeticao
         fat = fat * ( i + 1 );
     }
     return fat;
}

int quadrado(int side){
    return side * side; //Recebendo um inteiro calcula-se a area de um quadrado
}

int area_retangulo(int side, int base){
    return side * base; //Recebendo um inteiro calcula-se a area de um retangulo
}