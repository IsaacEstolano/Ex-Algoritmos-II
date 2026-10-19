#include <iostream>
using namespace std;

void imprime(char *v, int n) {
    /*
    char *c;
    for (c = v; c < v + n; c++)
    cout << *c;
    
    */
   for(int i=0;i<n;i++){
    cout <<v[i];
   }
}

int main(){
    char i[4]={'a','b','c','d'};
    imprime(i,4);
    return 0;
}