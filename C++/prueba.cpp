#include <iostream>

using namespace std;

int main() {
	int suma;
	int resta;
	int multiplicacion;
	float division;
	float a;
	float b;
	int c;
	int d;
	int e;
	
	cout << "ingrese el numero 1 ";
	cin>> a;
	cout << "ingrese el numero 2 ";
	cin>> b;
	cout << "ingrese el numero 3 ";
	cin>> c;
	cout << "ingrese el numero 4 ";
	cin>> d;
	cout << "ingrese el numero 5 ";
	cin>> e;	
	suma = a+b+c+d+e;
	cout << suma;
	cout << "\n";
	resta = a-b-c-d-e;
	cout << resta;
	cout << "\n";
	multiplicacion = a*b*c*d*e;
	cout << multiplicacion;
	cout << "\n";
	division = a/b;
	cout << division;
	cout << "\n";
	cout << "fin";
	
	
	
	return 0;
}
