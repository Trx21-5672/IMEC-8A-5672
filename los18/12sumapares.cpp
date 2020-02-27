#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(NULL));
	int lim_inf =-10;
	int lim_sup =10;
	int suma=0;
	float sumai=0;
	int can=0;
	float cani=0;
	float MA;

for(int i=0;i<10;i++){
	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
	cout<<valor<<endl;

	if(valor%2==0){
	suma+=valor;
		if(valor!=0){
		can+=1;
		}
	}	

	else{	
	sumai+=valor;
		if(valor!=0){
		cani+=1;	
		}
}
		
MA=(sumai/cani);
}
     int valor=rand()%100;	
cout<<"Suma de pares: "<<suma<<endl;
cout<<"Cantidad de numeros pares: "<<can<<endl;
cout<<"La media aritmetica de los impares es: "<<MA<<endl;
return 0;
} 
