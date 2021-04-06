#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
 int ind, pos, qtdeAlunos, acertos=0;
 char gabarito[5], prova[5];

 //Leitura do gabarito da prova
 cout <<"*** Gabarito da Prova ***\n";
 for (ind=0;ind<=4;ind++)
 {
 cout <<" Questão " + ind +1 <<": ";
 cin >>gabarito[ind];
 }
//Definição da quantidade de alunos da turma
 cout <<" Quantos alunos tem a turma?";
 cin >>qtdeAlunos;

 //Leitura das respostas de cada aluno da turma
 for (ind=1;ind<=qtdeAlunos;ind++)
 {
 cout <<"*** Respostas da Prova "<<ind<<"***\n";
 for (pos=0;pos<=4;pos++)
 {
 cout <<"Informe a "<<pos+1<<"a. resposta: ";
 cin >>prova[pos];
 if (prova[pos]==gabarito[pos])
 { acertos++; }
 }
 cout <<"Este aluno teve "<<acertos<<" acertos.\n";
 acertos=0;
 }
}
}
