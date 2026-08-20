#include <iostream>
using namespace std ;


int Resto(int num1,int num2){
    int resto=0;
    return resto = num1 - (num1/num2) *num2;
}
int main(){
    int a=12,b=5;
    cout<<Resto(a,b);
    return 0;
}