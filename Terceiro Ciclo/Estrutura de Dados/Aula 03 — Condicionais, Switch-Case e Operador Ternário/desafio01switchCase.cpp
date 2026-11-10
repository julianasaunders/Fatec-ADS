#include <iostream>
using namespace std;

int main() {
	int materiaAds;
	
	cout << "Digite o numero da materia (de 1 a 9): ";
	cin >> materiaAds;
	
	switch (materiaAds) {
		case 1:
			cout << "Visao computacional" << endl;
			break;
		case 2:
			cout << "Redes neurais" << endl;
			break;
		case 3:
			cout << "Engenharia de software" << endl;
			break;
		case 4:
			cout << "Front-end" << endl;
			break;
		case 5:
			cout << "Back-end" << endl;
			break;
		case 6:
			cout << "Banco de dados" << endl;
			break;
		case 7:
			cout << "Qualidade de software" << endl;
			break;
		case 8:
			cout << "Inteligencia artificial" << endl;
			break;
		case 9:
			cout << "Realidade aumentada" << endl;
			break;
		default:
			cout << "Materia invalida" << endl;
		}

	return 0;
}
