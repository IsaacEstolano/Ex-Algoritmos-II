/*
Escreva a função int* criaVetor(int n), que aloca um vetor de n inteiros, preenche cada posição 
i com i * i e devolve o endereço do vetor. No  main, leia n, chame a função, imprima o vetor e 
libere a memória. Por que é correto devolver o ponteiro de um vetor criado com new[], mas é um erro 
devolver o endereço de um vetor declarado localmente (int v[10];)? >>>> Porque depois que sai do escopo ele deixa de existir,vira lixo de memoria,o com o new,ele continua existindo até liberar a memoria
*/

#include <iostream>
using namespace std;

int* criaVetor(int n){
    int *vetor=new int(n);
    for(int i=0;i<n;i++){
        vetor[i]=i*i;
    }
    return vetor;
}

int main(){
    int n;
    cout<<"Digite o tam do vetor:"<<endl;
    cin>>n;
    int *vector=criaVetor(n);
    for(int i=0;i<n;i++){
        cout<<vector[i]<<endl;
    }
    delete [] vector;
    vector=nullptr;
    return 0;
}