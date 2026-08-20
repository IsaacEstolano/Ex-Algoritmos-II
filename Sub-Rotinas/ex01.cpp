#include <iostream>
using namespace std ;

int Verify(float num){
    if(num>=0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int numero;
    cout<<"Digite um numero:";
    cin>>numero;

    cout<<Verify(numero);

    
    return 0;
}