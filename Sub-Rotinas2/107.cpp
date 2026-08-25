#include <iostream>
#include <math.h>
using namespace std ;

int  biDeci(int binario){
    int potencia=0;
    int prox,decimal=0;

    while(binario>0){
        prox=binario%10;
        binario/=10;   
        decimal+=prox * pow(2,potencia);
        potencia ++;
        
    }
    return decimal;
}

int main(){
    int binario;
    cout<<"Digite um binario:";
    cin>>binario;
    cout<<biDeci(binario);
    return 0;
}