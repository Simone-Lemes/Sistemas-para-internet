#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
int num, contador, regressiva;
   cout <<"Qual o valor para início da contagem regressiva? ";
   cin >>regressiva;
   for (contador=regressiva;contador>=0;contador--)
   {
        cout <<contador<<"\n";
  }
 }
}
