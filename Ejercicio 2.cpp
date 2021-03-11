#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Operaciones{
	private:
		int Num1;
		int Num2;
	public:
		int suma();
		int resta();
		float dividir();
		int multiplicar();
		int valor(); 
};
int Operaciones::valor(){
	cout<<"Da el primer numero:"<<endl;
	cin>>Num1;
	cout<<"Da el segundo numero:"<<endl;
	cin>>Num2;
}
int Operaciones::suma(){
	cout<<"La suma es: "<<Num1+Num2<<endl;
}
int Operaciones::resta(){
	cout<<"La resta es: "<<Num1-Num2<<endl;
}
int Operaciones::multiplicar(){
	cout<<"La multiplicacion es: "<<Num1*Num2<<endl;
}
float Operaciones::dividir(){
	cout<<"La division es: "<<Num1/Num2<<endl;
}
int main (){
	Operaciones Ope1;
	Ope1.valor();
	Ope1.suma();
	Ope1.resta();
	Ope1.dividir();
	Ope1.multiplicar();
	
	return 0;
}

