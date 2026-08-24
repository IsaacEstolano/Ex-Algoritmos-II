#include <iostream>
using namespace std ;


template <typename T>
T dobro(T &a){
    return 2*a;
}
int main(){
    int num2=3;
    double num1 =3.2;
    float n=2.3;

    cout<<dobro(num2);
    cout<<dobro(num1);
    cout<<dobro(n);
    return 0;
}