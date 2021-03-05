#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main() {
	string nombre;
	
	int numero1,edad;
	
	cout << "Ingrese un numero: ";
	cin >> numero1;
	if(numero1>10){
		cout<<"ingrese su nombre ";
		cin >> nombre;
		cout<<"ingrese su edad ";
		cin>> edad;
		cout<<"su nombre es:"<< nombre << "su edad es:"<< edad;	
	}
	if (numero1>5&&numero1<10){
		int multi;
		multi=2*5*4;
		cout<<"el resultado de la multiplicacion 2*5*4 es:"<<multi<<"\n";
	}
	if(numero1<=5){
		cout<<"chao :D";
	}
	if(numero1==10){
		cout<< "hola";
	}
}
