#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

  float lado1, lado2, lado3;

  cout <<"Medida do primeiro lado: ";

  cin >>lado1;

  cout <<"Medida do segundo lado: ";

  cin >>lado2;

  cout <<"Medida do terceiro lado: ";

  cin >>lado3;

  if (lado1==lado2 && lado2==lado3)

  {

    cout <<"Este é um triângulo equilátero!";

  }

  else if (lado1==lado2 || lado2==lado3 || lado3==lado1)

  {

    cout <<"Este é um triângulo escaleno!";

  }

  else

  {

    cout <<"Este é um triângulo isósceles!";

  }

}
