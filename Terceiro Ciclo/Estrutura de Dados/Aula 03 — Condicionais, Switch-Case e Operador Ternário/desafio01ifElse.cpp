#include <iostream>
using namespace std;

int main() {
	int materiaAds;
	
	cout << "Digite o numero da materia (de 1 a 9): ";
	cin >> materiaAds;
	
	if (materiaAds >= 1 && materiaAds <= 9) {
		if (materiaAds == 1) {
			cout << "Visao computacional" << endl;
		} else if (materiaAds == 2) {
			cout << "Redes neurais" << endl;
		} else if (materiaAds == 3) {
			cout << "Engenharia de software" << endl;
		} else if (materiaAds == 4) {
			cout << "Front-end" << endl;
		} else if (materiaAds == 5) {
			cout << "Back-end" << endl;
		} else if (materiaAds == 6) {
			cout << "Banco de dados" << endl;
		} else if (materiaAds == 7) {
			cout << "Qualidade de software" << endl;
		} else if (materiaAds == 8) {
			cout << "Inteligencia artificial" << endl;
		} else if (materiaAds == 9) {
			cout << "Realidade aumentada" << endl;
		}
	} else {
		cout << "Numero da materia invalido." << endl;
	}
	
	return 0;
}
