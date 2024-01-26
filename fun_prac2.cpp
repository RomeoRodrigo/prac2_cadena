#include <iostream>

#include <cstdlib> // Para la funci�n rand
using namespace std;

// Prototipos de funciones
void generarNumerosAleatorios(int &numeroGenerado, int rangoInicio, int rangoFin);
void generarNumeroAleatorioReal(double &numeroGenerado);
bool esPrimo(int numero);
void generarNumerosPrimos(int n);

int main() {
	char opcion;
	
	do {
		// Men� principal
		cout << "Generando Numeros Aleatorios" << endl;
		cout << "(1) -- Genere al azar numeros entre 0-500" << endl;
		cout << "(2) -- Genere un numero aleatorio real" << endl;
		cout << "(3) -- Genere N numeros Primos" << endl;
		cout << "(s) -- Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1': {
			int numeroGenerado;
			generarNumerosAleatorios(numeroGenerado, 0, 500);
			cout << "Numero generado: " << numeroGenerado << endl;
		} break;
		case '2': {
			double numeroGenerado;
			generarNumeroAleatorioReal(numeroGenerado);
			cout << "Numero real generado: " << numeroGenerado << endl;
		} break;
		case '3': {
			int n;
			cout << "Ingrese la cantidad de numeros primos aleatorios que desea: ";
			cin >> n;
			generarNumerosPrimos(n);
		} break;
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

void generarNumerosAleatorios(int &numeroGenerado, int rangoInicio, int rangoFin) {
	// Genera un n�mero aleatorio entre rangoInicio y rangoFin
	numeroGenerado = rand() % (rangoFin - rangoInicio + 1) + rangoInicio;
}

void generarNumeroAleatorioReal(double &numeroGenerado) {
	// Genera un n�mero real aleatorio entre 0 y 1
	numeroGenerado = rand() / (RAND_MAX + 1.0);
}

bool esPrimo(int numero) {
	// Verifica si un n�mero es primo
	if (numero <= 1) {
		return false;
	}
	for (int i = 2; i * i <= numero; ++i) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}

void generarNumerosPrimos(int n) {
	// Genera N n�meros primos aleatorios
	int contador = 0;
	while (contador < n) {
		int numeroGenerado;
		generarNumerosAleatorios(numeroGenerado, 2, 1000); // Se puede ajustar el rango seg�n sea necesario
		if (esPrimo(numeroGenerado)) {
			cout << "Numero primo generado: " << numeroGenerado << endl;
			++contador;
		}
	}
}
