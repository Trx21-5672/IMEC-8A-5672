#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(NULL));
	int lim_inf =-20;
	int lim_sup =20;
	int suma=0;

for(int i=0;i<20;i++){
	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
	cout<<valor<<endl;

	if(valor>0){
	suma+=valor;
	}
		
}
     int valor=rand()%100;	
cout<<"Suma es: "<<suma<<endl;
return 0;
} 
