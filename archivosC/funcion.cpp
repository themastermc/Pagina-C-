#include<iostream>
#include<conio.h>
void mundo(int a);

2
int main(){
	int a = 0;
	std::cout<<"ingrese un numero "<<std::endl;
	std::cin>>a;
	mundo(a);

	getch();
	return 0;

}



void mundo(int a){
	int mul;
	for(int i = 0;i<=10;i++){
		std::cout<<i<<"  "<<a;
		a = a + a;
		std::cout<<std::endl;	
	}
}

