#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int hora;
cout << "Digite que horas são:";
cin >> hora;
if (hora>=6 && hora<=18)
{
cout <<"É dia";	
}
else
{
cout <<"É noite";
}
}
