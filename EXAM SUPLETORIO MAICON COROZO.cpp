#include <iostream>

using namespace std;

int main(){
	float SUBTOTAL = 0;
	float IVA = 0;
	float DESCUENTO = 0;
	float TOTAL = 0;
	int indice = 10; //indice para los vectores
	
	string articulos[indice], articulo;
	float precios[indice];
	
	for(int i=0; i<indice; i++){
		cout << "\nIngrese el articulo " << i+1 << ": ";
		getline(cin, articulos[i]);
		
		
		cout << "Ingrese el precio del articulo " << i+1 << ": ";
		cin >> precios[i];
		
		cin.ignore();
		
		SUBTOTAL = SUBTOTAL + precios[i];
	}
	
	IVA = SUBTOTAL * 0.12; //Calculo del del 12% de IVA 
	DESCUENTO = DESCUENTO * 0.10; //Calculo del 10% de DESCUENTO
	TOTAL = SUBTOTAL - DESCUENTO + IVA; //Calculo del valor total
	
	cout << endl;
	cout << "----------------------------------------------------" << endl;
	for(int i=0; i<indice; i++){
		cout << i+1 << ".- \t " << articulos[i] << " \t " << precios[i] << endl;
	}
	
	cout << endl;
	cout << "SUBTOTAL: \t\t" << SUBTOTAL << endl;
	cout << "IVA 12% +: \t\t" << IVA << endl;
	cout << "DESCUENTO 10% -: \t" << DESCUENTO << endl;
	cout << "TOTAL: \t\t\t" << TOTAL << endl;
	
	
	return 0;
}
