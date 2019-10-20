#include<stdio.h>

int suma_digitos(int n1);    //Prototipo de funcion recursiva para sumar los digitos de un numero

int main (void){
  int num = 109;
  int num_neg = -109;
  
  int sum_num = suma_digitos(num);         //Llamamos a funcion recursiva
  int sum_num_neg = suma_digitos(num_neg);
  
  printf("%d \n %d \n", num, sum_num);      //Imprmimimos para verificar resultado
  printf("%d \n %d \n", num_neg, sum_num_neg);      //Imprmimimos para verificar resultado
  return 0;
}


int suma_digitos(int n1){
  if(n1 < 0){                   //En caso de querer sumar los digitos de un numero negativo
    n1 *=-1;                        //lo convertimos a positivo
  }
  else if(n1<1){
    return 1;                 //Caso base: No hay mas digitos que sumar
  }
 return ((n1 % 10) + suma_digitos(n1 / 10)); //Caso recursivo
}
