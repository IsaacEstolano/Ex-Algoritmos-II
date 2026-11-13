/*
Escreva  um  programa  que  leia  números  inteiros  até  que  o  usuário  digite  0,  sem  saber  de  antemão 
quantos serão. Use um vetor dinâmico que cresce uma posição por vez: a cada novo valor, aloque um 
vetor com uma posição a mais, copie os valores antigos, libere o vetor antigo com delete[] e passe 
a usar o novo. Ao final, imprima os valores e a quantidade lida. 
*/

#include <iostream>
using namespace std;

int *armazVetor(int &size){
    int x;
    int *num=&x;
    int *vector=new int[size];
    cout<<"Digite um valor:";
    cin>>x;
    while(*num!=0)
    {
        vector[size]=*num;
        int *newVector=new int[size+1];
        for(int i=0;i<size;i++){
            newVector[i]=vector[i];
        }
        delete [] vector;
        vector=newVector;
        size+=1;
        cout<<"Digite um valor:";
        cin>>x;
    }

    return vector;
    }

void imprimeVetor(int n,int *vector){
    for(int i=0;i<=n;i++){
        cout<<vector[i]<<endl;
    }
}
int main(){
    int size=0;
    int *vector=armazVetor(size);
   imprimeVetor(size,vector);
    return 0;
}