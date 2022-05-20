#include <iostream>



using namespace std;

int main()
{
    float C;
    cout<<"Informe a temperatura em Celcius: ";
    cin>> C;
    float  F = C*(9.0/5.0)+32.0;
    cout << F << " Fahrenheit";

    return 0;
}