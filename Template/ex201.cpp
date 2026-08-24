#include <iostream>
using namespace std ;

/*void troca(int &a, int &b) {
 int tmp = a;
 a = b;
 b = tmp;
}*/

template <typename T>
void troca(T &a , T &b){
    T tmp= a;
    a=b;
    b=tmp;
    cout<<a<<"\n";
    cout<<b<<"\n";
}

template <typename T>
void vetor(T w[],int b){
    for(int i=0;i<b;i++){
        cout<<w[i];
    }
}

int main(){
    int num1=1,num2=2;
    double n1=1.5,n2=2.5;
    string name("Isaac"),name2("Israel");
    char m[4]="mae",p[4]="pai";
    

    int vetor1[1]={1};
    double vetor2[1]={9.2};
    troca(num1,num2);
    troca(n1,n2);
    troca(name,name2);
    vetor(vetor1, 1);
    vetor(vetor2,1);

}

