#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

int z;
cout << "Digite um valor : ";
cin >> z;
switch(z) {
case 5 : cout << 3 * z << " ";
case 10 : cout << 11 /2 * z << " ";
case 20 : cout << z * z - 10 << endl;
break;
default : cout << "Entrada invalida. " << endl;
}
}
