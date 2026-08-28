/*
a) Escreva uma função genérica que devolva a soma dos elementos de um vetor, recebendo o tamanho por
parâmetro.
b) Teste com um vetor de int e com um vetor de double.
c) Qual deve ser o tipo de retorno? Justifique.
d) O que acontece se você chamar a função com um vetor de char? Ela compila? O resultado faz sentido?
Explique.
*/

#include <iostream>
using namespace std ;


template <typename T>
T sumVet(T a[],int tamanho){
    T sum=0;
    while(tamanho>0){
        sum+=a[tamanho-1];
        tamanho--;
    }
    return sum;
}
int main(){
    int vet[3]={1,2,3};
   double vet2[2]={2.3,1.7};
    char vet3 [3]={'a','b','c'};
    cout<<sumVet<int>(vet,3);
    cout<<sumVet<double>(vet2,2);
    cout<<sumVet<char>(vet3,3);

    return 0;
}