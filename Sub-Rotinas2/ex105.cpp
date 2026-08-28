/*
Elabore um programa em C++ que preencha uma matriz 3x3 e rotacione-a como no exemplo abaixo: 
Original      Rotacionada
11 12 13        17 14 11
14 15 16        18 15 12
17 18 19        19 16 13 */

#include <iostream>
using namespace std;
#define lin 3
#define col 3
int rotacionar(int mat[lin][col]){
    int mat2[lin][col];
    int y=2;
    for(int i=0;i<lin;i++){
        int x=0;
        for(int j=0;j<col;j++){
            mat2[x][y]= mat[i][j];
            x++;
        }
        y--;
    }
     for(int i=0;i<lin;i++){
        cout<<"\n";
        for(int j=0;j<col;j++){
            cout<<mat2[i][j]<<"\t";
        }
    }
    return 0 ;
}

int main(){
    int mat[lin][col];
    int num=1;
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            mat[i][j]=num;
            num++;
        }
    }
       for(int i=0;i<lin;i++){
        cout<<"\n";
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<"\t";
        }
    }
    cout<<endl;
    cout<<rotacionar(mat);
    return 0 ;
}