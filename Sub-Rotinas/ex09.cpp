/*Faça um procedimento chamado trocar que recebe dois números inteiros por parâmetro,
 por referência, e troca os valores entre eles. No programa principal, declare duas variáveis inteiras,
  atribua valores a elas, chame o procedimento passando as duas variáveis e imprima os valores após a chamada,
   verificando que a troca realmente ocorreu.*/
#include <iostream>
using namespace std;

    void trocar(int &a,int &b){
        int c=0;
        c=a;
        a=b;
        b=c;
    }
   int main(){
    int num1,num2;
    cout<<"2 valores:";
    cin>>num1>>num2;

    trocar(num1,num2);
    cout<<num1<<"\n";
    cout<<num2<<"\n";

    return 0;
   }