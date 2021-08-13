#include <stdio.h>

int main() {
  int array[] = {1, 2, 3, 'a'};

  for(int i = 0; i < 3; i++)
  printf("%i ", array[i]);
  printf("%c", array[3]);
  return 0;
}