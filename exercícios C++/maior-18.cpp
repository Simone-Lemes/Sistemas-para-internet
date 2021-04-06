#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float dias, anos;
cout << "Quantos dias você já viveu? ";
cin >> dias;
anos = dias / 365;
cout << "Você já viveu " << anos << " anos.";
if (anos>=18)
{
cout << "Você é maior de idade.";
}
}
