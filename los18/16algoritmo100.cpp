#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(NULL));
	int lim_inf =-50;
	int lim_sup =60;
	int a=0;
	int b=0;
	int c=0;

for(int i=0;i<100;i++){
	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
	cout<<valor<<endl;

	if(valor<15)
	 a+=1;

	if(valor>50)
	b+=1;

	if(valor>25 && valor<45)
	c+=1;
	
}
     int valor=rand()%100;	

cout<<"Menores de 15: "<<a<<endl;
cout<<"Mayores de 50: "<<b<<endl;
cout<<"Comprendidos entre 25 y 45: "<<c<<endl;
return 0;
} 
