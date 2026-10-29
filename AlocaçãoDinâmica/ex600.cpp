#include <iostream>
using namespace std;

int main(){
    int nota=3;
    float media=0;
   float *a=new float [nota];

    for(int i=0;i<nota;i++){
        a[i]=7.8;
        media+=*a/3;
    }
    cout<<media;
    delete [] a;
    return 0;
}