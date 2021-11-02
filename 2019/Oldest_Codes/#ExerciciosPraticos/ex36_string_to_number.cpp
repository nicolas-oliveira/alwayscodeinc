/* strtol example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* strtol */
#include <iostream>
#include <string>
#include <cstring> /* strcpy */

int main ()
{
  /* char szNumbers[] = "2001 60c0c0 -1101110100110100100000 0x6fffff";
  char * pEnd;
  long int li1, li2, li3, li4;
  li1 = strtol (szNumbers,&pEnd,10);
  li2 = strtol (pEnd,&pEnd,16);
  li3 = strtol (pEnd,&pEnd,2);
  li4 = strtol (pEnd,NULL,0);
  printf ("The decimal equivalents are: %ld, %ld, %ld and %ld.\n", li1, li2, li3, li4);
  return 0; */
  
    std::string foo;

    std::cout << "Digite um numero: ";
    std::cin >> foo; // Entrada string do usuário

    char foo_array[foo.size()+1]; // Declaração do array de caracteres de mesmo tamanho de foo
    strcpy(foo_array, foo.c_str()); // Copia a string foo

    long int foo_number; // Declara um numero inteiro
    char* pEnd; // Bruxaria
    foo_number = strtol (foo_array,&pEnd,10); //Funcao que converte uma sequência de arrays para decima (parametro 2 é binário)

    std::cout << foo_number;
    
    return 0;
}