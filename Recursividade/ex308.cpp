/*
Faça  uma  função  recursiva  que  realize  a  multiplicação  entre  dois  valores  int,  sem  utilizar  o 
operador *.*/

#include <iostream>
#include <fstream>
using namespace std ;

int Maior(int num1,int num2){
    if(num2==0){
        return num1;
    }
    return (num1+=num1,num2--);
}

int main(){
    int num1=2,num2=9;
    ofstream result;
    result.open("result.txt");
    result <<Maior(num1,num2);
    return 0;
}