#include <iostream>



using namespace std;

int main()
{
    float valor_Real, valor_Cota, valor_Dolar ;
    cout<<"Informe o valor em Real: R$";
    cin>> valor_Real;
    cout<<"Informe a cotação do Dolar atual: US$";
    cin>> valor_Cota;
    valor_Dolar = (valor_Cota * valor_Real); 

    cout<< "O valor de R$" <<valor_Real << " converido para dolar na cotação atual é de: US$" << valor_Dolar ;

    return 0;
}