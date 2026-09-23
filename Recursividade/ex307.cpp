/*
Faça uma função recursiva que recebe um vetor preenchido e a quantidade de posições deste
vetor, e retorna o maior elemento do vetor.
*/

#include <iostream>
using namespace std ;

int Maior(int vet[],int posi){
    if(posi==0){
        return vet[0];
    }
    if(vet[posi-1]>Maior(vet,posi-2)){
        return vet[posi-1];
    }
    else{
        return Maior(vet,posi-2);
    }
}

int main(){
    int vet[2]={3,2};
    int resultado = Maior(vet,2);
    cout<<resultado;
    return 0;
}