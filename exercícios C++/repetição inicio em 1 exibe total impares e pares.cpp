#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
int limite, cont, num, qtdePar=0, qtdeImpar=0;
cout <<"A sequência irá de 1 até quanto? ";
cin >>limite;
for (cont=1;cont<=limite;cont++)
{
cout <<"Informe o "<<cont<<"o. número: ";
cin >>num;
if (num%2==0)
{
qtdePar++;
}
else
{
qtdeImpar++;
}
}
cout <<"Quantidade de números pares: "<<qtdePar<<"\n";
cout <<"Quantidade de números ímpares: "<<qtdeImpar;
}
}
