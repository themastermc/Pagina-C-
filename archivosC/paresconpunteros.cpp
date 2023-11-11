//ingrese 5 nums en un vector y cree un puntero al vector y mostrar aquellos pares y su posicion de memoria

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int vector[5], *puntero;
	
	for(int i = 0; i < 5; i++){
		cout<<"ingrese num"<<endl;
		cin>>vector[i];
	}	
	puntero = vector;
	
	for(int i = 0; i < 5; i++){
		if(*puntero % 2 == 0){
		cout<<"El numero par es "<<*puntero<<" en la posicion de memoria "<<puntero<<endl;
		}
		puntero++;
		
	}
	
	
	getch();
	
	return 0;
	
}

