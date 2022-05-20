#include <iostream>

using namespace std;

int main()
{
    int num1, num2,num3;
    cout<<"Informe o primeiro número inteiro: ";
    cin>> num1;
    cout<<"Informe o segundo número inteiro: ";
    cin>> num2;
    cout<<"Informe o terceiro número inteiro: ";
    cin>> num3;
    int resultado = num1+ num2+num3;
    cout<<"A soma dos numeros: " <<num1<< " + " << num2<< " + " <<num3 << " foi: " <<resultado;
    
    return 0;
}