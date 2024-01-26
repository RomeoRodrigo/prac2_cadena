#include <iostream>
using namespace std;
// Variables globales
double num1, num2; // Para almacenar los números ingresados

// Funciones para el menu 
void operacionesConNumeros();
void concatenarCadenas();

int main() {
	char opcion;
	
	do {
		// Menú principal de la pantalla
		cout << "Menu Principal" << endl;
		cout << "(1)-Operaciones con numeros" << endl;
		cout << "(2)-Concatenar 2 cadenas" << endl;
		cout << "(s)-Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			operacionesConNumeros();
			break;
		case '2':
			concatenarCadenas();
			break;
		case 's':
		case 'S':
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opcion no valida. Intente de nuevo." << endl;
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}

void operacionesConNumeros() {
	char opcion;
	
	do {
		// Submenu para realizar opera
		cout << "SubMenu Operaciones con numeros" << endl;
		cout << "1)- Suma de 2 numeros" << endl;
		cout << "2)- Division de 2 numeros" << endl;
		cout << "m)- Volver al menu principal" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "La suma es: " << num1 + num2 << endl;
			break;
		case '2':
			cout << "Ingrese el numerador: ";
			cin >> num1;
			cout << "Ingrese el denominador (distinto de cero): ";
			cin >> num2;
			if (num2 != 0) {
				cout << "La division es: " << num1 / num2 << endl;
			} else {
				cout << "Error: Division por cero." << endl;
			}
			break;
		case 'm':
		case 'M':
			cout << "Volviendo al menu principal." << endl;
			break;
		default:
			cout << "Opcion no valida. Intente de nuevo." << endl;
		}
	} while (opcion != 'm' && opcion != 'M');
}

void concatenarCadenas() {
	string cadena1, cadena2;
	
	// Concatenar dos cadenas
	cout << "Ingrese la primera cadena: ";
	cin >> cadena1;
	cout << "Ingrese la segunda cadena : ";
	cin >> cadena2;
	cout << "La concatenacion es: " << cadena1 + " " + cadena2 << endl;
}
