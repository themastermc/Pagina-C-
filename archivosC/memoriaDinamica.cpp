#include<iostream>
#include<stdlib.h> //para usar new y delete
using namespace std;
	void SolicitarDatos();
	void MostrarDatos(int **p_matriz, int CantF, int CantC);
	int **p_matriz, CantF, CantC; //puntero a una matriz
int main(){
	SolicitarDatos();
	MostrarDatos(p_matriz, CantF, CantC);
	for(int i=0;i<CantF;i++){
	delete[] p_matriz[i]; // se libera memoria de columna
	}
	delete[] p_matriz; //se libera memoria de filas
	return 0;	
}
void SolicitarDatos(){
	cout<<"Ingresar la cantidad de filas: ";
	cin>>CantF;
	cout<<"Ingresar la cantidad de columnas: ";
	cin>>CantC;
	p_matriz=new int *[CantF]; // reserva memoria para filas
	for(int i=0;i<CantF;i++){
		p_matriz[i] = new int[CantC]; // reserva memoria para columnas
}
	for(int i=0;i<CantF;i++){
		for(int j=0;j<CantC;j++){
			cout<<"Ingrese valor "<<i+1<<": "<<endl;
			cin>>*(*(p_matriz+i)+j); //p_matriz[i][j];
		}}}
void MostrarDatos(int **p_matriz, int CantF, int CantC){
	cout<<"listado de datos ingresados \n";
	for(int i=0;i<CantF;i++){
	for(int j=0;j<CantC;j++){
	cout<<" valor "<<i+1<<" : "<<*(*(p_matriz+i)+j)<<endl;
}}}

