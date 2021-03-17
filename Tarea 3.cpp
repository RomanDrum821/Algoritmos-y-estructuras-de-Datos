#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

class Sueldo{
	private:
		float SueldoMensual;
		float Venta;
	public:
		float comision();
		float Iva();
		void ObtenerDatos();
		float SueldoNeto();
		Sueldo();
		~Sueldo();
};
Sueldo::Sueldo(){
}
Sueldo::~Sueldo(){
}

void Sueldo::ObtenerDatos(){
	cout<<"Introduzca el sueldo mensual: "<<endl;
	cin>>SueldoMensual;
	cout<<"Introduzca las ventas mensuales: "<<endl;
	cin>>Venta;
}

float Sueldo::comision(){
	float C;
	C= Venta*.04;
	return C;
}

float Sueldo::Iva(){
	float I;
	I= .16;
	return I;
}

float Sueldo::SueldoNeto(){
	float A,B,sueldoneto;
	A= (SueldoMensual+comision());
	B= A*Iva();
	sueldoneto= A-B;
	return sueldoneto;
}

int main(){
	Sueldo S;
	S.ObtenerDatos();
	cout<<"El Sueldo neto es: "<<S.SueldoNeto()<<endl;
		
}

