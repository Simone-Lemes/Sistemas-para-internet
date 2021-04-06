#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float dias, anos;
cout << "Quantos anos você já fez?";
cin >> anos;
dias = anos * 365;
cout << "Você já viveu " <<  dias << " dias.";

 

}
