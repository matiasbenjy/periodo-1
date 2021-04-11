#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
	int suma=10,numero,x=10;
	cout<<"usuario deme un numero ";
	cin>> numero;
	if(numero>=500){
		while(x<numero){
		cout<<x<<"\n ";
		x=x+suma;	
		}
		cout<<x;
		
		
	}
	else{
		while(numero<500){
			cout<<"usuario deme un numero ";
			cin>> numero;
			while(x<numero){
				cout<<x<<"\n ";
				x=x+suma;		
			}	
		}
		cout<<x;
	}	
}
	

