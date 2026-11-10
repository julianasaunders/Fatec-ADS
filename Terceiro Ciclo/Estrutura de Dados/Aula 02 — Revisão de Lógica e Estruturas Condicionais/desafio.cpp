
#include <iostream>
using namespace std;

int main() {
	int numero;
	cout << "Digite um numero: ";
	cin >> numero;
	
	if (numero >= 1) {
		cout << "O numero e positivo." << endl;
	} else if (numero <= -1){
		cout << "O numero e negativo." << endl;
	}
	if (numero == 0) {
		cout << "O numero e zero." << endl;
	}
	
	return 0;
}
