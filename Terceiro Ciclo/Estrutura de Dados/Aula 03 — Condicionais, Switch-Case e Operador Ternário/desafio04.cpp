#include <iostream>
using namespace std;

int main() {
    double salario, salarioComDesconto;
    
    cout << "Digite o salario: ";
    cin >> salario;
    
    if (salario <= 20000) {
        cout << "Isento de imposto de renda." << endl;
    } else if (salario <= 50000) {
        salarioComDesconto = salario * 0.90;
        cout << "O salario com desconto e " << salarioComDesconto << endl;
    } else {
        salarioComDesconto = salario * 0.80;
        cout << "O salario com desconto e " << salarioComDesconto << endl;
    }

    return 0;
}
