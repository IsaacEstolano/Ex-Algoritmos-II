/*Faça um procedimento que recebe dois números inteiros positivos num1 e num2
 por valor, além de dois parâmetros adicionais, quociente e resto, por referência.
  O procedimento deve calcular o quociente e o resto da divisão inteira de num1 por num2 
  e armazená-los nos parâmetros por referência, de forma que o programa principal possa 
  utilizá-los após a chamada. */

  #include <iostream>
  using namespace std;

void div(int a,int b,int &q,int &r){
    q=b;
    r=a%b;
}

  int main(){

    int num1=5,num2=3;
    int quociente=0,resto=0;
    
    div(num1,num2,quociente,resto);
    cout<<quociente<<"\n";
    cout<<resto<<"\n";
    return 0;
  }