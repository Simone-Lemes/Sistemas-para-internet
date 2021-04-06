//Receba uma matriz 4x4 de números inteiros. 
//Gere e exiba uma segunda matriz na qual as linhas são as colunas da matriz 1, e as colunas são as linhas da matriz 1. Observe:

#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
 int lin,col, M1[4][4], M2[4][4];
 for (lin=0;lin<=3;lin++)
 {
 for (col=0;col<=3;col++)
 {
 cout <<"Informe a posição ["<<lin+1<<","<<col+1<<"]: ";
 cin >>M1[lin][col];
 M2[col][lin]=M1[lin][col];
 }
 }
 cout <<"*** Veja a nova matriz! ***\n";
 for (lin=0;lin<=3;lin++)
 {
 for (col=0;col<=3;col++)
 {
 cout <<M2[lin][col]<<" ";
 }
 cout <<"\n";
 }
}
}

