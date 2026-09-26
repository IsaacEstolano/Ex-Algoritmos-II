/*
Crie uma struct chamada Retangulo, com os campos base e altura (ambos do tipo float). Escreva 
uma função que recebe uma variável do tipo Retangulo e retorna a sua área (base × altura). 
*/

#include <iostream>
using namespace std ;

struct retangulo
{
    float base;
    float altura;
};
float area(int base,int altura){
    return base*altura;
}

int main(){
    retangulo retangulo1;
    retangulo1={2,2};
    cout<<area(retangulo1.base,retangulo1.altura);
    return 0;
}