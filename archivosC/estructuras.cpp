#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
struct empleado {
char nombre[30];
int edad;
float sueldo;
};
int main(){
struct empleado e[3]; //Array de de 3 posiciones de tipo empleado
int i;
//Ingreso de datos
for(i=0; i<3; i++){
	cout<<"Ingrese nombre:";
	cin.getline(e[i].nombre, 30, '\n');
	fflush(stdin);
	cout<<"Ingrese edad: ";
	cin>> e[i].edad;
	cout<<"Ingrese sueldo: ";
	cin>> e[i].sueldo;
	cout<<"\n\n";
	fflush(stdin);
}
//Se muestran los datos.
for(i=0; i<3; i++){
cout<<"Nombre: "<<e[i].nombre<<endl;
cout<<"Edad: "<<e[i].edad<<endl;
cout<<"Sueldo: "<<e[i].sueldo<<"\n\n";
}

getch();

return 0;
}

