/*
Escreva uma função genérica que receba um vetor, o seu tamanho e um valor-limite do mesmo tipo dos
elementos, e devolva quantos elementos são maiores que esse limite.
a) Implemente e teste com int e com double.
b) O tipo de retorno é T? Justifique — a resposta separa quem entendeu o mecanismo de quem decorou a
sintaxe.
c) Quantos parâmetros de tipo essa função precisa? Por quê?
*/

#include <iostream>
using namespace std ;


template <typename T>
int sumVet(T a[],int tamanho,T limite){
    int cont=0;
    while(tamanho>0){
        if(a[tamanho]>limite){
            cont++;
        }
        tamanho--;
    }
    return cont;
}
int main(){
    int vet[3]={1,2,3};
   double vet2[2]={2.3,1.7};

    cout<<sumVet<int>(vet,3,0);
    cout<<sumVet<double>(vet2,2,0);

    return 0;
}