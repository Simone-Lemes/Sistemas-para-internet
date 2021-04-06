#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
 int num, resto;
 cout <<"Informe um número qualquer: ";
 cin >> num;
 resto=num%2;
 if (resto==0 && num>0)
 {
 cout <<"Este número é par e positivo!";
 }
 }
