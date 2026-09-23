/*
Faça uma função recursiva que recebe um número inteiro positivo e retorna a soma dos seus
dígitos. Por exemplo, para 4321 o resultado deve ser 4 + 3 + 2 + 1 = 10.
*/

#include <iostream>
using namespace std ;

int sumDig(int num){
    if(num<0){
        return 1;
    }
    return sumDig(num+=num%10);
}