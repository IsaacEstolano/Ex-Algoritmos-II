#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int media[2]={1,3};
    //string name={"isaac","iel"};
    ofstream teste;
    teste.open("aspas.txt");
    teste <<"Isaac é com 2 A,nao com q";
    teste  <<media;
    return 0;
}