#include<stdio.h>

int suma_digitos(int n1);

int main (void){
  int num = 109;

  int num2 = suma_digitos(num);

  printf("%u \n %u \n ", num, num2);
  return 0;
}


int suma_digitos(int n1)
{
 return ((n1 % 10) + digitos(n1 / 10)); //caso recursivo
}
