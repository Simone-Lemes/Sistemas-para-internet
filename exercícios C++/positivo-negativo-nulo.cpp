//número positivo, negativo e nulo
#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int num;
cout <<"Informe um número qualquer: ";
cin >> num;


if (num>0)

  {

  cout <<"Este número é positivo!";

  }

else if (num<0)

  {

  cout <<"Este número é negativo!";

  }

else

  {

  cout <<"Este número é nulo!";

  }
}
