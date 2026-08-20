/*Faça uma funcao que receba entre 1 e 4 valores e retorne a soma deles,use parametros default*/
#include <iostream>
using namespace std;

int sum(int a=0,int b=0,int c=0,int d=0){
    return a+b+c+d;
}
int main(){
    int num1,num2,num3,num4;
    cout<<"4 VALORES";
    cin>>num1>>num2>>num3>>num4;
    cout<<sum(num1,num2,num3);

    return 0;
}