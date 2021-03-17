#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

class TrianguloRectangulo{
	private:
		float Base;
		float Altura;
	public:
		float Area();
		float Perimetro();
		void ObtenerDatos();
		TrianguloRectangulo();
		~TrianguloRectangulo();
};
TrianguloRectangulo::TrianguloRectangulo(){
}
TrianguloRectangulo::~TrianguloRectangulo(){
}

void TrianguloRectangulo::ObtenerDatos(){
	cout<<"Introduzca la Base: "<<endl;
	cin>>Base;
	cout<<"Introduzca la Altura: "<<endl;
	cin>>Altura;
}

float TrianguloRectangulo::Area(){
	float A;
	A= (Base*Altura)/2;
	return A;
}

float TrianguloRectangulo::Perimetro(){
	float P,H;
	H= sqrt(pow(Base,2)+pow(Altura,2));
	P= Base+Altura+H;
	return P;
}

int main(){
	TrianguloRectangulo TR;
	TR.ObtenerDatos();
	cout<<"El area de el triangulo es: "<<TR.Area()<<endl;	
	cout<<"El perimetro de el triangulo es: "<<TR.Perimetro()<<endl;	
}

