/*Escreva um programa em C++ que possui a função binário, que transforma um número decimal
em um número binário. Você deve também escrever um main que faça a chamada da função.
Exemplo de transformação: */

#include <iostream>
#include <math.h>
using namespace std ;

int  deciBI(int decimal){
    int resto=0;
    int binario=0;
    int posicao=1;
    while(decimal>0){
        resto=decimal%2;
        binario+=resto *posicao;

        posicao*=10;
        decimal/=2;
    }
    return binario;
}

int main(){
    int decimal;
    cout<<"Digite um decimal:";
    cin>>decimal;
    cout<<deciBI(decimal);
    return 0;
}