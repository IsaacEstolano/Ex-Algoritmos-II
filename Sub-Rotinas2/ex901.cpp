#include <iostream>
using namespace std ;

int maior(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}
float maior(float num1,float num2){
       if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

char maior(char num1,char num2){
     if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int num1=2,num2=1;
    cout<<maior(num1,num2);
    return 0;
}