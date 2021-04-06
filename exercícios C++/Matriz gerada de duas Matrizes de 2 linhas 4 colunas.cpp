//Receba duas matrizes de duas linhas e quatro colunas cada. 
//Feito isso, gere uma terceira matriz cujos elementos serão o produto entre a primeira matriz e a segunda. Exiba os valores da matriz gerada.

#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
 int lin,col,M1[2][4],M2[2][4],M3[2][4];
 for (lin=0;lin<=1;lin++)
 {
 for (col=0;col<=3;col++)
 {
 cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"] da Matriz 1: ";
 cin >>M1[lin][col];
 cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"] da Matriz 2: ";
 cin >>M2[lin][col];
 M3[lin][col]=M1[lin][col]+M2[lin][col];
 }
 }
 cout <<"*** Elementos da Matriz 3 ***\n";
 for (lin=0;lin<=1;lin++)
 {
 for (col=0;col<=3;col++)
 {
 cout <<"Elemento ["<<lin+1<<","<<col+1<<"] -> "<<M3[lin][col]<<"\n";
 }
 }
}
}
