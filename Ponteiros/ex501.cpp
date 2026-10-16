#include <iostream>
using namespace std;
/*
void hm(int mnts, int *h, int *m){
    *h=mnts/60;
    *m=mnts%60;
}
int main() {
int h, m;
hm(135, &h, &m);
cout << h << "h" << m << "min"; // 2h15min
}*/
void mm(int v[], int n, int *min, int *max){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[n]> *max){
                v[n]= *max;
            }
            else{
                v[n]= *min;
            }
        }
}

}
int main() {
int v[5] = {4, 9, 2, 7, 5};
int menor=0, maior=0;
mm(v, 5, &menor, &maior);
cout << menor << " " << maior; // 2 9
}
