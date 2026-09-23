/* Faça uma função recursiva para elevar um valor base à potência do valor expoente. Considere
que expoente é um valor inteiro maior ou igual a zero.*/

#include <iostream>
using namespace std ;

template <typename T>
T potencia(T base,int exp){
    if(exp==0){
        return;
    }
    base*=base;
    return potencia(base,exp-1);
}
/*
or
return base*potencia(base,exp-1)*/