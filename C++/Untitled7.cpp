#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;


int main(){
	system("color 5b");
	string nombre;
	int edad;
	string dondevives;
	string comida_fav;
	bool mascotas;
	
	cout <<"cual es su nombre: ";
	cin >> nombre;
	cout<<"cual es su edad: ";
	cin >> edad;
	cout<<"donde vives: ";
	cin >> dondevives;
	cout<<"cual es su comida favorita: ";
	cin >> comida_fav;
	cout<<"tienes mascota: ";
	cin >> mascotas;
	Sleep(3000);
	system("cls");
	cout <<"Su nombre es: " << nombre << " su edad es: "<<edad <<" donde vives:  "<<dondevives<< " comida favorita: "<<comida_fav << " tienes mascota:"<<mascotas;
	
	getch();
}

