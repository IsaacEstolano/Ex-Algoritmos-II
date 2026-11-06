#include<thread>
#include<chrono>
#include<iostream>
using namespace std;
using namespace std::chrono;
int main(){
    //this_thread::sleep_for(microseconds(1));
    string nome;
    cout<<"Nome:";
    cin>>nome;
    auto  inicio= steady_clock::now();
    //this_thread::sleep_for(milliseconds(100));

    auto fim=steady_clock::now();
    long long ms= duration_cast<milliseconds>(fim-inicio).count();

    return 0;
}
