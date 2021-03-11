#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Persona {
	private:
		char nombre[40];	
	public:
		void dormir();
		void hablar();
		void contar();
		void decirnombre();
		void obtenernombre();
};

void Persona::dormir(){
	cout<<"No molestar... estoy durmiendo"<<endl;
}
void Persona::hablar(){
	cout<<"Platicando por el gusto de convivir..."<<endl;
}
void Persona::contar(){
	cout<<"Contando 1... 2... 3... 4... 5..."<<endl;
}	
void Persona::obtenernombre(){
	cout<<"Dime tu nombre"<<endl;
	cin>>nombre;
}
void Persona::decirnombre(){
	cout<<"Mi nombre es: "<<nombre<<endl;
}
	
int main (){
	Persona Per1;
	Per1.dormir();
	Per1.hablar();
	Persona Per2;
	Per2.contar();
	Per2.obtenernombre();
	Per2.decirnombre();
	return 0;
}

