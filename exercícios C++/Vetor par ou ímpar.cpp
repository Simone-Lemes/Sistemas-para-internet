#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
 int ind,total=0,jogadasA[10],jogadasB[10],venceuA=0,venceuB=0;
 for (ind=0;ind<=9;ind++)
 {
 cout <<"*** "<<ind+1<<"a. JOGADA ***\n";
 cout <<"Numero escolhido pelo jogador A: ";
 cin >>jogadasA[ind];
 cout <<"Numero escolhido pelo jogador B: ";
 cin >>jogadasB[ind];
 total=jogadasA[ind]+jogadasB[ind];
 if (total%2==0)
 {
 cout <<"Jogador A venceu!\n";
 venceuA++;
 }
 else
 {
 cout <<"Jogador B venceu!\n";
 venceuB++;
 }
 total=0;
 }
 cout <<"O jogador A ganhou "<<venceuA<<" vezes.\n";
 cout <<"O jogador B ganhou "<<venceuB<<" vezes.\n";
}
}
