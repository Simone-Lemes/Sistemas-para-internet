#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
 int num,ind,tentativas=0, numeros[10];
 bool achou=false;
 cout <<"*** Rodada do 1o. jogador ***\n";
 for (ind=0;ind<=9;ind++)
 {
 cout <<"Informe o "<<ind+1<<"o. número: ";
 cin >>numeros[ind];
 }
 cout <<"*** Rodada do 2o. jogador ***\n";
 cout <<"Que número acha que foi informado? ";
 cin >>num;
 tentativas=1;
 ind=0;
 while (!achou && tentativas<=3)
 {
 while (!achou && ind<=9)
 {
 if (numeros[ind]==num)
 {
 achou=true;
 }
 ind++;
 }
 if (!achou)
 {
 tentativas++;
 cout <<"Número não encontrado!!!\n";
 cout <<"Tentativa "<<tentativas<<" - Que número acha que foi informado? ";
 cin >>num;
 ind=0;
 }
 }
 if (achou)
 {
 cout <<"Parabéns! Este número está na posição "<<ind<<" do vetor! Você usou
"<<tentativa<<" tentativas...";
 }
 else
 {
 cout <<"Que pena! Você não acertou...";
 }
}
}
