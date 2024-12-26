// Paula Gálvez Romero de Ávila
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Ingrese los operandos: ";
    cin >> a >> b;
    cout << "Ingrese una operación (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "SUMA: " << a + b << endl;
            break;
        case '-':
            cout << "RESTA: " << a - b << endl;
            break;
        case '*':
            cout << "MULTIPLICACIÓN: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "DIVISIÓN: " << a / b << endl;
            else
                cout << "Error: División por cero." << endl;
            break;
        default:
            cout << "Operación NO VÁLIDA." << endl;
    }

    return 0;
}
