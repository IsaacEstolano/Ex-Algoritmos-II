#include <iostream>
using namespace std;
    int** criaMatriz(int l, int c) {
        int **m = new int*[l];
         for (int i = 0; i < l; i++)
            m[i] = new int[c];
            return m;
            }
    void liberaMatriz(int **m, int l) {
        for (int i = 0; i < l; i++)
            delete[] m[i];
            delete[] m;
            }
    void valorMatriz(int **m,int l,int c){
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                m[i][j]=i+j;
            }
        }
    }
    int** transposta(int **m, int l, int c){
        int **transposta=new int*[l];
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                transposta[i][j]=m[j][i];
            }
        }
        return transposta;

    }
int main(){ 
    int l,c;
    cout<<"Linhas e colunas:";
    cin>>l>>c;
    criaMatriz(l,c);
    liberaMatriz(criaMatriz(l,c),l);
    cout<<transposta(criaMatriz(l,c),l,c);
    return 0 ;
}