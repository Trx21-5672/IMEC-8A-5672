#include <iostream>
	using namespace std;
	int main(){
	int c;
	float x;
	float i;
	float d;
	float pt; 
	cin>>x;
	cin>>c;
	pt=((x+i)*c);	
	i=(x*0.15);
	d=(i)*(0.05); 
cout<<"Emitir factura del producto con un precio de "<<x<<endl;
cout<<"Se compro la cantidad de "<<c<<" productos"<<endl;
	if(pt>=50000){
	cout<<"Descuento del 5 por cien es:"<<(pt-d)<<endl; 
	}
	else{

cout<<"Precio de los productos mas IVA:"<<pt<<endl; 
	}
	return 0;
}