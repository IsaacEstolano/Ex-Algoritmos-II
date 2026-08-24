/*
Seja N um número quadrado perfeito. Se somarmos os números ímpares consecutivos
(1+3+5+7+9+...) até que esta soma seja igual a N, o número M de termos somados será igual a
raiz quadrada de N.
Exemplo: N = 16 16 = 1 + 3 + 5 + 7 M = 4 termos.
Logo, a raiz quadrada de 16 é 4.
Fazer um programa que possua uma função em C++ que receba um valor N e retorne true se N é
quadrado perfeito, ou false em caso contrário. 
*/
#include <iostream>
using namespace std ;
bool qperfeito(int num1){
    int imp=1;
    int i=0;
    int armaz=0;
  while(i<=num1){
    if(armaz==num1){
        return true;
    }
    armaz+=imp;
    imp+=2;
    i++;
  }
  return false;
}

int main(){
    int num1;
    cout<<"Digite um numero:";
    cin>>num1;
    cout<<qperfeito(num1);
    return 0;
}