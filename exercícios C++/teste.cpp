#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

int a, b;
  cout<< "\n Digite um valor: ";
  cin>> a;
  if (a <= 2)
      b = a + 2 * 30 / 10;
  
  system("pause");
}
