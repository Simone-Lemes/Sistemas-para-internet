#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
float quantDin,  valorComb, quantLitros;
cout << ("Quanto custa o litro do combustível? R$");
cin >> valorComb;
cout << ("Quantos reais você tem? R$ ");
cin >> (quantDin);
quantLitros=quantDin/valorComb;
cout << "Com R$" <<quantDin <<" você consegue abastecer " <<floor (quantLitros) <<" litros de combustível.\n";
cout << "Com R$" <<quantDin <<" você consegue abastecer " <<quantLitros <<" litros de combustível.";
}


