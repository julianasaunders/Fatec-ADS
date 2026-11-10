#include <iostream>
using namespace std;

int main() {
	int lado1, lado2, lado3;
	
	cout << "Digite o primeiro lado do triangulo: ";
	cin >> lado1;
	cout << "Digite o segundo lado do triangulo: ";
	cin >> lado2;
	cout << "Digite o terceiro lado do triangulo: ";
	cin >> lado3;
	
	if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
		
		if (lado1 == lado2 && lado2 == lado3) {
			cout << "O triangulo e equilatero." << endl;
		} else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
			cout << "O triangulo e isosceles." << endl;
		} else {
			cout << "O triangulo e escaleno." << endl;
		}
		
	} else {
		cout << "Os lados informados nao formam um triangulo." << endl;
	}

	return 0;
}
