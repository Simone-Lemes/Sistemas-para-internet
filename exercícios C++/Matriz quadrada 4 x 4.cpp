//Receba uma matriz quadrada 4x4 (quatro linhas e quatro colunas) de elementos do tipo real. 
//Em seguida, pergunte ao usuário a linha da matriz que ele deseja visualizar. Com essa informação, exiba a linha desejada.

#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
 int lin,col, int1;
 float Matriz[4][4];
 for (lin=0;lin<=3;lin++)
 {
 for (col=0;col<=3;col++)
 {
 cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"] da Matriz: ";
 cin >>Matriz[lin][col];
 }
 }
 cout <<"Que linha deseja ver? ";
 cin >>lin;
 for (col=0;col<=3;col++)
 {
 cout <<"Elemento ["<<lin<<","<<col+1<<"] -> "<<Matriz[lin][col]<<"\n";
 }
}
}
