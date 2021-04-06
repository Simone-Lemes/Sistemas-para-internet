#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

int num, quadrado, cubo;
	cout << "Informe um número qualquer:";
	cin >> num;
	quadrado = num * num;
	cubo = num * num * num;
	cout << num << "\nao quadrado é: " << quadrado;
	cout << num << "\nao cubo é: " << cubo;

  
}


