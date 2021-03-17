#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

class TrianguloR{
	private:
		float Cat1;
		float Cat2;
	public:
		float Area();
		float Perimetro();
		float Hipotenusa();
		void ObtenerDatos();
		TrianguloR();
		~TrianguloR();
};
TrianguloR::TrianguloR(){
}
TrianguloR::~TrianguloR(){
}

void TrianguloR::ObtenerDatos(){
	cout<<"Introduzca el primer cateto: "<<endl;
	cin>>Cat1;
	cout<<"Introduzca el segundo cateto: "<<endl;
	cin>>Cat2;
}

float TrianguloR::Area(){
	float A;
	A= (Cat1*Cat2)/2;
	return A;
}

float TrianguloR::Hipotenusa(){
	float H;
	H= sqrt(pow(Cat1,2)+pow(Cat2,2));
	return H;
}

float TrianguloR::Perimetro(){
	float P;
	P= Cat1+Cat2+Hipotenusa();
	return P;
}

int main(){
	TrianguloR TR;
	TR.ObtenerDatos();
	cout<<"El area de el triangulo es: "<<TR.Area()<<endl;
	cout<<"La hipotenusa de el triangulo es: "<<TR.Hipotenusa()<<endl;	
	cout<<"El perimetro de el triangulo es: "<<TR.Perimetro()<<endl;
		
}
