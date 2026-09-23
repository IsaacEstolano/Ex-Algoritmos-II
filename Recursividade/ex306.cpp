/*
Faça uma função recursiva que recebe um vetor preenchido e a quantidade de posições deste
vetor, e retorna a soma de todos os elementos do vetor.
*/
#include <iostream>
using namespace std ;

int sumElem(int vet[],int posi){
    if(posi<=0){
        return vet[0];
    }
    return vet[posi-1]+sumElem(vet,posi-2);
}

int main(){
    int vet[3]={2,2,2};
    cout<<sumElem(vet,3);
    return 0;
}