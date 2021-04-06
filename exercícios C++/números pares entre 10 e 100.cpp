#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
  int num=10;
  for (num=10;num<=100;num+=2)
 {
   cout <<num<<"\n";
  }
 }
