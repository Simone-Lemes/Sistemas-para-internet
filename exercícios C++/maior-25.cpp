#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int num, quadrado;
cout << "Informe um número qualquer: ";
cin >> num;
quadrado = num * num;
cout <<num << " ao quadrado é: " << quadrado;
if (quadrado>25)
{
cout << " o quadrado de " << num << " é maior do que 25.";
}
}

