#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
int cont, num, maior=0;
for (cont=1;cont<=15;cont++)
{
cout <<"Informe o "<< cont<< "o. número: ";
cin >>num;
if (num>maior)
{
maior=num;
}
}
cout <<"O maior número informado foi "<<maior;
}
}
