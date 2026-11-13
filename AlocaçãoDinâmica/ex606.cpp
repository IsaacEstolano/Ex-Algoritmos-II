/*
Leia a quantidade n e n números reais. Armazene-os em um vetor alocado dinamicamente e imprima-
os na ordem inversa. Em seguida, crie um segundo vetor dinâmico com o mesmo tamanho contendo 
o quadrado de cada valor, imprima-o e libere os dois vetores.
*/

#include <iostream>
using namespace std;
int* criaVetor(int n){
    int *vector=new int(n);
    return vector;
}  
void armazVetor(int n,int *vector){
     for(int i=0;i<n;i++){
        cout<<"Digite valores para o vetor de "<<n<<" posições:";
        cin>>vector[i];
    }
}
void imprimeVetorInverso(int n,int *vector){
    for(int i=n-1;i>=0;i--){
        cout<<vector[i]<<endl;
    }
}
void vetorQuadrado(int n,int *vector,int *vectorSquare){
    for(int i=0;i<n;i++){
        vectorSquare[i]=vector[i]*vector[i];
    }
}
void imprimeVetor(int n,int *vector){
    for(int i=0;i<n;i++){
        cout<<vector[i]<<endl;
    }
}
int main(){
    int n;
    cout<<"Digite o tam do vetor:"<<endl;
    cin>>n;
    int *vector=criaVetor(n);
    armazVetor(n,vector);
    imprimeVetorInverso(n,vector);
    int *vectorSquare=criaVetor(n);
    vetorQuadrado(n,vector,vectorSquare);
    imprimeVetor(n,vectorSquare);
    delete [] vectorSquare;
    vectorSquare=nullptr; 
    delete [] vector;
    vector=nullptr;
    return 0;
}