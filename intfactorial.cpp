#include <iostream>
using namespace std;
int main(){
  int i = 6, j = 120;
  /*
    nosotros sabemos que un int soporta 4 bytes que es 2^32
    ,tam bien sabemos que a partir de 5! todos los numeros seran 
    multiplos de 5 ,asi que decidi empezar desde 5 ya que los factoriales
    de los numeros anteriores no son multiplos de 5
  */
  while(((j *= i) % 5) == 0){//aqui multiplicamos nuestra variable j que es 5! por el que le sigue que es 6
    i++;//si pasa la condicion seguimos sumandole el iterador i para que el factorial de mi numero aumente; ejm !6 = 6 * !5
  }
  /*imprimo i - 1 porque en el while el numero que pase la condicional se seguira sumando y si llega hasta el numero 
   donde se encuentra el tope a este le sumara 1*/
  cout << "El maximo numero cuyo factorial soporta un tipo de dato int es: " << i-1 << endl;
  
  return 0;
}
