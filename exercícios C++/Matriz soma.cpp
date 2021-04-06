// matriz quadrada com 3 linhas e 3 colunas para calcular a soma dos elementos armazenados em posições onde a linha e a coluna tenham o mesmo valor

#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{

  int Mat_Num[3][3];

  int lin, col, soma=0;

  for (lin=0;lin<=2;lin++)

  {

   for (col=0;col<=2;col++)

   {

    cout <<"Qual o elemento ["<<lin+1<<","<<col+1<<"]? ";

     cin >>Mat_Num[lin][col];

    if (lin==col)

    {

     soma+=Mat_Num[lin][col];

    }

   }

  }

  cout <<"A soma da diagonal principal é "<<soma;

 }
}
