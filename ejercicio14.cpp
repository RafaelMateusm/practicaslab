#include <iostream>
#include <wchar.h>
#include <locale.h>
using namespace std;

int main() {
	double temperatura;
	setlocale(LC_ALL, "");
	cout << "Introduce la temperatura en grados celsius:";
	cin >> temperatura;

	if (temperatura > 30) {
		cout << "La actividad m�s apropiada para esa temperatura es la nataci�n.";
	}
	if (temperatura > 20 && temperatura <= 30) {
		cout << "La actividad m�s apropiada para esa temperatura es el tenis.";
	}
	if (temperatura > 10 && temperatura <= 20) {
		cout << "La actividad m�s apropiada para esa temperatura es el golf.";
	}
	if (temperatura > 5 && temperatura <= 10) {
		cout << "La actividad m�s apropiada para esa temperatura es el esqu�.";
	}
	if (temperatura <= 5) {
		cout << "La actividad m�s apropiada para esa temperatura es el parch�s.";
	}
	system("pause");
	return 0;
}