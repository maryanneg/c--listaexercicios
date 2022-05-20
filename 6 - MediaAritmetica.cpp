#include <iostream>



using namespace std;

int main()
{
    float nota1,nota2,nota3,nota4 ;
    cout<<"Informe a primeira nota: ";
    cin>> nota1;
    cout<<"Informe a segunda nota: ";
    cin>> nota2;
    cout<<"Informe a terceira nota: ";
    cin>> nota3;
    cout<<"Informe a quarta nota: ";
    cin>> nota4;
    float  Media = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "Sua média: " << Media;

    return 0;
}