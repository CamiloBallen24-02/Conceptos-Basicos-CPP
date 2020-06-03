#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


/*
	new: Reserva el numero de bytes solicitado por la declaracion
	delete: Libera un bloque de bytes reservado con anterioridad
*/


void pedirNotas();
void mostrarNotas();

int numCalif;
int *calif;


int main() {
	pedirNotas();
	mostrarNotas();
	
	delete[] calif; //Liberando el espacio en bytes utilizados anteriormente
	
	getch();
	return 0;
}


void pedirNotas(){
	cout << "Digite el numero de calificaciones ";
	cin >> numCalif;
	
	calif = new int [numCalif];
	
	for(int i=0; i<numCalif; i++){
		cout << "Ingrese una nota: ";
		cin  >> calif[i];
	}
	
}

void mostrarNotas(){
	cout << "\nMostrando notas del usuario\n";
	for(int i=0; i<numCalif; i++){
		cout << calif[i] << endl;
	}
}
	
