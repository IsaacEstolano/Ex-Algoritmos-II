#include <iostream>
using namespace std ;


template <typename T,typename t1,typename t2>
bool intervalo(T &a,t1 &b,t2 &c){
    if(a>b && a<c){
        return true;
    }
    return false;
}
int main(){
    int num2=3;
    double num1 =3.2;
    float n=2.3;
    cout<<intervalo(num2,n,num1);
    
    return 0;
}