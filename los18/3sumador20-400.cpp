#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int SumP;
	long double Ximp;

for(int i=20;i<=60;i+=2){
	SumP+=i;
	Ximp*=i;
}

cout<<"Suma de los pares: "<<SumP<<endl;
cout<<"Producto de los pares: "<<Ximp<<endl;
return 0;

}