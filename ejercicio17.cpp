#include <iostream>
using namespace std;
int main()
{
	double numero;
	char letra;
	cout << "vamos a hacer un conversor de medidas." << endl;
	cout << "introduce un numero y una letra";
	cin >> numero;
	cin >> letra;
	while (numero != 0)
	{
		if (letra == 'p')
		{
			cout << "son: " << numero * 2.54 << "cm" << endl;
		}
		if (letra == 'm')
		{
			cout << "son: " << numero * 1609.34 << "metros" << endl;
		}
		if (letra == 'f')
		{
			cout << "son: " << (numero - 32)/1.8  << "grados celsius" << endl;
		}
		if (letra == 'g')
		{
			cout << "son: " << numero * 3.78541 << "litros" << endl;
		}
		if (letra == 'o')
		{
			cout << "son: " << numero * 28.3495 << "gramos" << endl;
		}
		if (letra == 'l')
		{
			cout << "son: " << numero * 0.453592 << "kg" << endl;
		}
		cin >> numero;
		cin >> letra;

	}
	return 0;

}