#include <iostream>
using namespace std;

int main()
{
   int num;
   int *p = &num;
   cout <<"Informe um numero inteiro: ";
   cin >>num;
   cout <<"O valor digitado foi: "<< num << endl;
   cout <<"Endereco da memoria onde esse numero esta armazenado: "<< &num << endl;
   cout << "Conteudo apontado pelo ponteiro *p: " << *p << endl;

}
