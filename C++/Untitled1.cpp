#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
int main(){
	system("color 0a");
	int numero;
	cout << "hola";
	cout <<"ingrese su nombre: ";
	string holamundo = "";
	cin >> holamundo;
	Sleep(3000);
	cout <<"hola ricardo de 33 años: ";
	cin >> numero;
	Sleep(2000);
	system ("cls");
	char hola = '*';
	cout << "hola, " << holamundo << " su edad es "<< numero << "\n";
	system("pause");
	cout << "\n"<<hola;
	
	getch();
	
}
