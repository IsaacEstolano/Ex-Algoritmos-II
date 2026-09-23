/*
Faça uma função recursiva que recebe um número inteiro positivo e retorna a quantidade de
dígitos desse número. Por exemplo, para 4321 o resultado deve ser 4.
*/

#include <iostream>
using namespace std ;

int digitos(int num=333,int digi=0){
    if(num<=0){
        return 1;
    }
    return digitos(num/10,digi++);
}