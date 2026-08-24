/*Elabore um algoritmo que crie um menu para que o usuário escolha qual matriz deseja gerar. Gere a
matriz (os valores não serão lidos e nem gerados com rand. Vocês deverão encontrar uma lógica para
o desenvolvimento) escolhida pelo usuário e imprima-a na tela. Solicite novamente até que o usuário
escolha sair do programa (a saída será mediante a digitação do valor zero).*/

#include <iostream>
using namespace std ;
#define lin 5
#define col 5
void mat1(){
    int mat[lin][col];
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            if((i+j)%2==0){
                mat[i][j]=0;
            }
            else{
                mat[i][j]=1;
            }
        }
    }
    for(int i=0;i<lin;i++){
        cout<<"\n";
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<"\t";
        }
    }
}
void mat2(){
    int cont=0,num=1,newj=0;
    int mat2[lin][col];
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            if(j<i){
                mat2[i][j]=0;
            }
            else{
                mat2[i][j]=num;
                num++;
               
            }
        } 
    }
     for(int i=0;i<lin;i++){
        cout<<"\n";
        for(int j=0;j<col;j++){
            cout<<mat2[i][j]<<"\t";
        }
    }
}

void menu(){
    int op;
    while(op!=0){
    cout<<"\nSelecione as matrizes de 1 a 6 ou digite 0 se deseja encerrar o programa:";
    cin>>op;
        if(op==1){
            mat1();
        }
        if(op==2){
            mat2();
        }
    }
    
}

int main(){
    menu();

    return 0;
}