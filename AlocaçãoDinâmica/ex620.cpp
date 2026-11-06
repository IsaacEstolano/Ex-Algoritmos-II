/*
Usando o arquivo turma.txt do slide anterior, escreva um programa que aloque o vetor 
de Aluno, calcule e imprima a média da turma e o nome dos aprovados (nota >= 6). Libere 
a memória ao final.
• Trate o caso de arquivo inexistente.
*/
#include <iostream>
#include <fstream>
using namespace std;
struct Turma{
    string aluno;
    int nota;
};  

int main(){
    int n,k=0;
    int armaz=0;
    string aprovado[k];
    ifstream arq;
    arq.open("turma.txt");
    if(!arq.is_open()){
        return 1;
    }
    arq>>n;
    Turma *turma=new Turma[n];
    for(int i=0;i<n;i++){
        arq>>turma[i].aluno,arq>>turma[i].nota;
        armaz+=turma[i].nota;
        if(turma[i].nota>=6){
            aprovado[k]=turma[i].aluno;
            k++;
        }
    }
    arq.close();
    for(int i=0;i<k;i++){
        cout<<aprovado[k]<<endl;
    }
    cout<<armaz/n;
    delete[] turma;
    return 0;
}