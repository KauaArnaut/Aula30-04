#include <iostream>

using namespace std;

int main()
{
    int *vetor = new int[5];

    for(int i = 0;i < 5; i++) {
        cout <<"Digite o valor para a posicao "<< i <<": ";
        cin >> vetor[i];
    }

    cout <<"Valores digitados no vetor: "<< endl;
    for(int i = 0; i < 5; i++){
        cout <<"Posicao " << i << "; " << (vetor[i]) << endl;
    }
}
