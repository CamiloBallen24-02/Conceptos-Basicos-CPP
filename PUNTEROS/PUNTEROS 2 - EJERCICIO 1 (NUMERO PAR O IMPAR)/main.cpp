#include <iostream>
#include <conio.h>
using namespace std;

/*
	COMPROBAR SI UN NUMERO ES PAR O IMPAR Y SE�ALAR LA POSICION 
	DE MEMORIA DONDE SE ESTA GUARDANDO EL NUMERO
*/

int main() {
	int numero, *dir_numero;
	
	cout << "Digite un numero: ";
	cin >> numero;
	
	dir_numero = &numero; //Guardamos la posicion de memoria
	
	if( (*dir_numero % 2) == 0){
		cout << "El numero " << *dir_numero << " es par" << endl;
		cout << "Posicion: " << dir_numero << endl;
	}
	
	else{
		cout << "El numero " << *dir_numero << " es impar" << endl;
		cout << "Posicion: " << dir_numero << endl;
	}
	
	getch();
	return 0;
}
