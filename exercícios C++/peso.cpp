#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float pesoAtual, emagrecer, engordar;
cout << "Peso atual (kg): ";
cin >> pesoAtual;
emagrecer = pesoAtual - (pesoAtual*20/100);
engordar = pesoAtual + (pesoAtual*15/100);
cout << "Peso + 15 %: " << engordar;
cout << "\nPeso - 20 %: " << emagrecer;
}


