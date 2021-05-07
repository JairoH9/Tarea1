#include <iostream>
using namespace std;

float pedirDato(string tipoDato) {
	float dato;
	do {
		cout << "Dame el " << tipoDato << ":" << endl;
		cin >> dato;

		if (dato <= 0) {
			cout << "El Valor del " << tipoDato << "no es valido" << endl;
		}
	} while (dato <= 0);
	return dato;
}

float calcularBMI(float peso, float altura) {
	float bmi;
	bmi = 0;
	bmi = peso / (altura * altura);

	return bmi;
}


void clasificarBMI(float bmi) {
	if (bmi < 18.5) {
		cout << "Bajo peso" << endl;

	}
	else if (bmi >= 18 && bmi <= 24.9) {
		cout << "Peso Normal" << endl;

	}
	else if (bmi >= 25 && bmi <= 29.9) {
		cout << "Sobrepeso" << endl;

	}
	else {
		cout << "Obeso" << endl;
	}
}

int main() {
	float peso;
	float altura;
	float bmi;
	peso = pedirDato("peso");
	altura = pedirDato("altura");
	cout << "El peso es " << peso << " y la altura es " << altura << endl;
	bmi = calcularBMI(peso, altura);
	cout << "El indice de la masa corporal es de: " << bmi << endl;
	clasificarBMI(bmi);
	return 0;
}