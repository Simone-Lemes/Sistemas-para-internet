#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float precoProduto, precoVenda;
cout << "Digite o preço do produto: R$";
cin >> precoProduto;
precoVenda = precoProduto + (precoProduto * 20 / 100);
cout << "Preço sugerido para venda é de R$" <<precoVenda;

}
