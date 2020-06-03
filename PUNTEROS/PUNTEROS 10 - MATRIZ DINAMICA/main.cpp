#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostarMatriz(int **, int, int);

int **puntero_matriz; 
int nFilas;
int nCol;

int main() {
	pedirDatos();
	mostarMatriz(puntero_matriz, nFilas, nCol);
	
	//Liberando memoria de la matriz
	for(int i=0; i<nFilas; i++){
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	
	getch();
	return 0;

}



void pedirDatos(){
	cout << "Digite el numero de Fila: ";
	cin >> nFilas;
	
	cout << "Digite el numero de Columnas: ";
	cin >> nCol;
	
	
	puntero_matriz = new int *[nFilas];
	
	for(int i=0; i<nFilas; i++){
		puntero_matriz[i] = new int[nCol];
	}
	
	cout << "\nDigitando elementos de la matriz: ";
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << "Digite un numero [" << i << "][" <<j<< "]: ";
			cin >> *(*(puntero_matriz+i)+j);
		}
	}
}



void mostarMatriz(int **puntero_matriz, int nFilas, int nCol){
	
	cout << "\n\nImprimendo matriz:\n";
	
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout<<*(*(puntero_matriz+i)+j);
		}
		cout << "\n";
	}
	
	
}




















