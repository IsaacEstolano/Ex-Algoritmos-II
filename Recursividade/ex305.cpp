/*
Faça uma função recursiva que recebe uma posição N e retorna o elemento correspondente na
Série de Fibonacci. Considere que a Posição 1 é 1 e a Posição 2 é 1.
*/
#include <iostream>
using namespace std ;

int fibonacci(int num){
    if(num<=2){
        return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}
