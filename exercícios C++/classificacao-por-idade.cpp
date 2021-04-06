#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

  int idade;

  cout <<"Idade do competidor: ";

  cin >>idade;

  if (idade>=7 && idade<=12)

  {

    cout <<"Categoria: INFANTIL";

  }

  else if (idade>=13 && idade<=17)

  {

    cout <<"Categoria: JUVENIL";

  }

  else if (idade>=18 && idade<=49)

  {

    cout <<"Categoria: ADULTO";

  }

  else if (idade>=50)

  {

    cout <<"Categoria: SENIOR";

  }

  else

  {

    cout <<"Idade inválida!";

  }

}
