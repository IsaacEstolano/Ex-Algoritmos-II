/*Faça uma função que recebe, por parâmetro, a altura e o 
sexo de uma pessoa e retorna o seu peso ideal. Para os homens, 
calcular o peso ideal usando a fórmula PI = 72,7 * altura – 58,
 e para as mulheres PI = 62,1 * altura – 44,7.  
   */
#include <iostream>
using namespace std ;
float idealPeso(char sex,float altura){
    if(sex=='M'){
        return 72.7 * altura - 58;
    }
    if(sex=='F'){
        return 62.1 * altura - 44.7;
    }
}

int main(){
    char sex;
    float altura;
    cout<<"Digite seu sexo:";
    cin>>sex;
    cout<<"Digite sua altura em centímetros:";
    cin>>altura;

    cout<<idealPeso(sex,altura);
    return 0;
}