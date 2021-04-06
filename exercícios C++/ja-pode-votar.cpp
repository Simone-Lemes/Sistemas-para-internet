#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

 int anoAtual, anoNasc, idade;
  cout <<"Ano atual: ";
  cin >> anoAtual;
  cout <<"Ano de nascimento:";
  cin >> anoNasc;
  idade=anoAtual-anoNasc;
  cout <<"Você tem ou fará " << idade << " anos.";
  if (idade>=16)
  {
  cout <<"Você já pode votar!";
  }
  }


