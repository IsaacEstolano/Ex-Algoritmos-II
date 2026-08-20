#include <iostream>
using namespace std ;
template <typename T> T menor(T a , T b){
    return a<b?a:b;
}

int main(){
    int d=1,w=0;
    char a='s',b='q';
    cout<<menor(a,b);
    return 0;
}