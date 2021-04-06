#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
float salario;
cout <<"Informe o seu salário: R$ ";
cin >> salario;
if (salario>1000)
{
cout <<"Seu salário é maior do que o salário mínimo!";
}
else
{
cout <<"Seu salário é menor do que o salário mínimo!";
}
}
