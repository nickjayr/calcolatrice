#include <iostream>

using namespace std;

int main() {
    // Dichiarare le variabili
    double num1, num2;
    char operazione;

    // Chiedere l'utente l"input
	cout << "che operazione?  (+ ,- ,*  ,/ ,: )";
    cin >> operazione;
    cout << "Inserisci primo operando: ";
    cin >> num1;
    cout << "Inserisci secondo operando: ";
    cin >> num2;
    

    // Usare il switch case come da voi richiesto
    switch (operazione) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        }

    return 0;
}