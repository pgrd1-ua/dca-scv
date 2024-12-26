// Paula Gálvez Romero de Ávila
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Ingrese dos números: ";
    cin >> a >> b;
    cout << "Ingrese una operación (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Resultado de la SUMA: " << a + b << endl;
            break;
        case '-':
            cout << "Resultado de la RESTA: " << a - b << endl;
            break;
        case '*':
            cout << "Resultado de la MULTIPLICACIÓN: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Resultado de la DIVISIÓN: " << a / b << endl;
            else
                cout << "Error: División por cero." << endl;
            break;
        default:
            cout << "Operación no válida." << endl;
    }

    return 0;
}
