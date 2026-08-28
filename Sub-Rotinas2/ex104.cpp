/*
Faça um programa em C++ que preencha uma matriz 5x5 e em seguida gere uma segunda matriz,
que é a transposta da primeira.  */

#include <iostream>
using namespace std;
#define lin 3
#define col 3
int transposta(int mat[lin][col]){
    int mat2[lin][col];
    int y=0;
    for(int i=0;i<lin;i++){
        int x=0;
        for(int j=0;j<col;j++){
            mat2[x][y]= mat[i][j];
            x++;
        }
        y++;
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
    cout<<transposta(mat);
    return 0 ;
}