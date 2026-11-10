#include <iostream>
using namespace std;

int main() {
	int nota;
	
	cout << "Digite uma nota: ";
	cin >> nota;
	
	if (nota >= 6) {
		cout << "A nota foi aprovada." << endl;
	} else if (nota < 6) {
		cout << "A nota foi reprovada." << endl;
	}
 
	return 0;
}
