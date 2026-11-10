#include <iostream>
using namespace std;

int main() {
	int numero;
	cout << "Digite um numero: ";
	cin >> numero;
	
	if (numero >= 10 && numero <= 20) {
		cout << "O numero esta no intervalo de 10 a 20." << endl;
	} else {
		cout << "O numero esta fora do intervalo de 10 a 20." << endl;
	}
	
	return 0;
}
