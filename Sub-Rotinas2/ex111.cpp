/*Elabore um algoritmo que crie um menu para que o usuário escolha qual matriz deseja gerar. Gere a
matriz (os valores não serão lidos e nem gerados com rand. Vocês deverão encontrar uma lógica para
o desenvolvimento) escolhida pelo usuário e imprima-a na tela. Solicite novamente até que o usuário
escolha sair do programa (a saída será mediante a digitação do valor zero).*/

#include <iostream>
using namespace std ;
#define lin 5
#define col 5
void mat1(){
    int i=0,j=0,mat[lin][col];
    for(i=0;i<lin;i++){
         if(i%2==0 || i==0){
                mat[i][j]=0;
            }
            else{
                mat[i][j]=1;
            }
        for(j=0;j<col;j++){
            if(j%2==0 || j==0){
                mat[i][j]=0;
            }
            else{
                mat[i][j]=1;
            }
        }
    }
    for(i=0;i<lin;i++){
        cout<<"\n";
        for(j=0;j<col;j++){
            cout<<mat[i][j]<<"\t";
        }
    }
}

void menu(int op=-1){
    while(op!=0){
    cout<<"Selecione as matrizes de 1 a 6 ou digite 0 se deseja encerrar o programa:";
    cin>>op;
        if(op==1){
            mat1();
        }
    }
    
}

int main(){
    int op;
    menu(op);

    return 0;
}