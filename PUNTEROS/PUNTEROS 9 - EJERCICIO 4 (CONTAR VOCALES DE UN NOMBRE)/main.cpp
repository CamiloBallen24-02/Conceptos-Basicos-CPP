//EJERCICIO - CONTAR VOCALES DE UN NOMBRE CON PUNTEROS

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];




int main() {
	pedirDatos();
	cout << "\n\n El numero de vocales del numero es: " <<contandoVocales(nombreUsuario) << endl;	
	
	getch();
	return 0;
}



void pedirDatos(){
	cout << "Digite su nombre; ";
	cin.getline(nombreUsuario, 30, '\n');
	
	strupr(nombreUsuario); //Trasformando a mayuscula el nombre
}




int contandoVocales(char *nombre){
	int cont=0;
	
	while(*nombre){ //Mientras nombre no se a nulo '/0
		
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}	
	
	return cont;
}




























