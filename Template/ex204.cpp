#include <iostream>
using namespace std;
template <typename T>
void fun(const T &x) {
 static int contador = 0;
 cout << "x = " << x << " contador = " << contador << endl;
 ++contador;
}
int main() {
 fun<int>(1);
 fun<int>(1);
 fun<double>(1.1);
 /*
 fun<double>(1.1);
  fun<double>(1.2);
  fun<double>(1.1);
  fun<int>(1);
 */
 

 return 0;
}