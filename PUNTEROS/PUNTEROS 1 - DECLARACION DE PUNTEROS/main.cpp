#include <iostream>
#include <conio.h>

using namespace std;

//  &n = la direccion de n
// *m = la variable de cuya direccion esta almacenada en m

int main() {
	int num;
	int *dir_num;
	
	num=20;
	dir_num = &num;
	
	cout << "Numero: " << *dir_num << endl;
	cout << "Direccion de mem: " << dir_num << endl;
	getch();
	
	return 0;
	
}
