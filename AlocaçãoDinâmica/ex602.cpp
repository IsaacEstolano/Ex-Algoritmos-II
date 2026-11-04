/*
Escreva um programa que leia a quantidade n de notas, aloque um vetor de double com new[] (de 
tamanho n, definido só em tempo de execução), leia as notas, imprima a média e a maior n e libere 
o vetor com delete[]. Por que não é possível declarar double notas[n]; de forma portável?>>Porque o c++ precisa saber o tamanho em tempo de compilação para os arrays comuns
*/
#include <iostream>
using namespace std;

int main(){
    int n,maiorN=0;
    double media=0;
    cin>>n;
    double *nota=new double[n];
    for(int i=0;i<n;i++){
        cout<<"digite a n:";
        cin>>nota[i];
        media+=nota[i];
        if(nota[i]<=maiorN){
            maiorN=nota[i];
        }
    }
    cout<<media/n;
    delete []nota;
    return 0;
}