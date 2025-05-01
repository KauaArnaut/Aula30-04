#include <iostream>
using namespace std;

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void troca(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;
    cout <<"Antes da troca: (int)" << endl;
    cout <<"x = "<< x <<", y = "<< y << endl;
    troca(&x,&y);
    cout <<"Depois da troca: (int)" << endl;
    cout <<"x = "<< x <<", y = "<< y << endl;

    cout <<"---------------------------------"<< endl;

    float a = 12.65f, b = 29.54f;
    cout <<"Antes da troca: (float)" << endl;
    cout <<"a = "<< a <<", b = "<< b << endl;
    troca(&a,&b);
    cout <<"Depos da troca: (float)" << endl;
    cout <<"a = "<< a <<", b = "<< b << endl;

    cout <<"---------------------------------"<< endl;

    char c1 = 'K', c2 = 'A';
    cout <<"Antes da troca: (char)" << endl;
    cout <<"c1 = "<< c1 <<", c2 = "<< c2 << endl;
    troca(&c1,&c2);
    cout <<"Depos da troca: (char)" << endl;
    cout <<"c1 = "<< c1 <<", c2 = "<< c2 << endl;

}
