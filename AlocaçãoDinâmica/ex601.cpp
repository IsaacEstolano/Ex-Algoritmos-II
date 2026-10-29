/*
Escreva um programa que aloque dinamicamente um inteiro com new, leia um valor do teclado para 
dentro dele, multiplique o valor por 2 usando o ponteiro, imprima o resultado e libere a memória com 
delete.  Por  que  o  ponteiro  continua  guardando  um  endereço  depois  do  delete?  Que  valor  é 
recomendável atribuir a ele em seguida?
*/
#include <iostream>
using namespace std;

int main(){
    int *a=new int;
    cout<<"Digite algo:";
    cin>>*a;
    *a*=2;
    //imprime conteudo
    cout<<*a<<"\n";
    //imprime endereço
    cout<<a<<"\n";
    //deleta o conteudo para onde esta apontando o a no heap
    delete a;
    //continua apontando para o mesmo lugar
    cout<<a<<"\n";
    //imprime o conteudo para onde esta apontando=lixo de memoria
    cout<<*a;
    //para de apontar para onde estava
    a=nullptr;
    //imprime lixo de memoria
    cout<<a<<"\n";
    return 0;
}