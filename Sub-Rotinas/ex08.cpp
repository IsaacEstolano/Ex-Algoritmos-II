/*Faça uma função que gere e mostre os dez primeiros primos acima de 100.  
   */
#include <iostream>
using namespace std ;

void primos(){
    int contPrimos=0;
    for(int i=100;contPrimos<10;i++){
        if(i%i==0 && i%1==0){
            contPrimos++;
            cout<<i<<"\n";
        }
    }
}

int main(){
    primos();
    return 0 ;
}