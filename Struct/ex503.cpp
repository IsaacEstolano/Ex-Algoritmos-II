/*
Crie  uma  struct  chamada  Aluno,  com  os  campos  nome  (string)  e  nota  (float).  Escreva  uma 
função que recebe um Aluno e retorna verdadeiro se ele está aprovado (nota maior ou igual a 7) 
e falso caso contrário.
*/

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std ;
//    return sqrt((x1*x1)+(2*x1*x2)+(x2*x2)+(y1*y1)+(2*y1*y2)+(y2*y2));
struct aluno
{
    string nome;
    float nota;
    bool aprovado;
};
void aprovado(aluno &aluno1,fstream &arqluno){
    if(aluno1.nota>=7){
        aluno1.aprovado=true;
        arqluno<<"S";
    }
}
int main(){
    string dadoAluno;
    fstream arqALuno;
    arqALuno.open("./alunos.csv", ios::in | ios::out | ios::app);
    if(arqALuno.is_open()){
        cout<<"Arquivo abrindo";
    }
    else{
        cout<<"Arquivo nao foi aberto";
        return 0;
    }
    arqALuno<<"Isaac"<<","<<4<<endl;

    aluno aluno1={"isaac",8,false};
    arqALuno << dadoAluno;
    aprovado(aluno1,arqALuno);
    cout<<aluno1.aprovado;
    return 0;
}