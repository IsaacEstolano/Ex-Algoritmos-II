/*
Faça um programa que receba um valor N e, utilizando uma função recursiva, imprima a
contagem regressiva a partir deste valor. Por exemplo, se o usuário digitar 5, o programa deverá
imprimir 5, 4, 3, 2, 1, 0.
*/

#include <iostream>
using namespace std ;

void impriNum(int Num){
    if(Num<0){
    return;
    }
    cout<<Num;
    impriNum(Num-1);
}
 int main(){
    
 }