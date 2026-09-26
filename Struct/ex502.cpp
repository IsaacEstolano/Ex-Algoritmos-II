/*
Crie uma struct chamada Ponto, com os campos x e y (ambos do tipo float). Escreva uma função 
que recebe dois pontos e retorna a distância entre eles, usando a fórmula: distância = √((x2 − 
x1)2 + (y2 − y1)2) 
*/

#include <iostream>
#include <cmath>
using namespace std ;
//    return sqrt((x1*x1)+(2*x1*x2)+(x2*x2)+(y1*y1)+(2*y1*y2)+(y2*y2));
struct ponto
{
    float x;
    float y;
};
float area(ponto a,ponto b){
    return sqrt(pow(a.x-b.x)+pow(a.y-b.y));
}

int main(){
    return 0;
}