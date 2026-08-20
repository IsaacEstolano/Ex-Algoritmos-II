/*Faça uma função que recebe, por parâmetro, um valor N inteiro e positivo e retorna
 verdadeiro se N for um número perfeito e falso em caso contrário. Obs.: número perfeito é aquele que
  é igual a soma de seus divisores. */
  #include <iostream>
using namespace std ;

bool numPerfeito(int num1){
    int sumDiv=0;
    if(num1<0){
        return false;
    }
    for(int i=1;i<num1;i++){
        if(num1%i==0){
            sumDiv+=i;
        }
    }
    if(num1==sumDiv){
        return true;
    }
    
    return false;
    
}

int main(){
    int num;
    cout<<"Digite um numero";
    cin>>num;
    cout<<numPerfeito(num);

    return 0;
}