using namespace std;
#include <iostream>
struct Data{
    int mes;
    int dia;
    int ano;
};
void troca(int *i, int *j) {
int *temp;
*temp = *i;
*i = *j;
*j = *temp;
cout<<i<<j;
}
int main(){
  //  cout << sizeof(Data);  = 12

  /*double v[4]={10,20,30,40};
  for(int i=0;i<4;i++){
    cout<<&v[i]<<"\n";
  }
int *p1, *p2, v = 5, x = 3;
p1 = &v;
p2 = &x;
*p1 = *p2;
cout << *p1 << " " << *p2 << "\n";
*p1 = 9;
cout << *p1 << " " << *p2 << "\n";
p2 = p1;
*p2 = 10;
cout << *p1 << " " << *p2 << " " << v << " " << x;

int i=1,j=2;
troca(&i,&j);
*/


return 0;
}