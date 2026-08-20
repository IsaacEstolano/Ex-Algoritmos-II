/*Faça um programa que possua uma função que decida se dois
 números inteiros positivos são amigos. Dois números são amigos 
 quando a soma dos seus divisores (excluindo o próprio valor) 
 coincide com o outro número. Exemplo: 284 e 220 são amigos.  */
#include <iostream>
using namespace std ;


int numAmigo (int a, int b){
    int sumDiv1=0,sumDiv2=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sumDiv1+=i;
        }
    }
    for(int i=1;i<b;i++){
        if(b%i==0){
            sumDiv2+=i;
        }
    }
    if(sumDiv1==b && sumDiv2==a){
        return 1;
    }
    return 0;
}

int main(){

    int num1,num2;

    cout<<"Digite dois valores:";
    cin>>num1>>num2;
    cout << numAmigo(num1,num2);
    return 0;
}
